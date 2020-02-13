#include<iostream>
#include<string>
using namespace std;

template <typename N>
class Contain{
private:
	N n;
public:
	Contain(N n){ this->n=n;}
	N get(){ return n;}
	void pr(){ cout<< n << endl;}
};

int main(){
	Contain<int> a(100);
	Contain<string>b("hello");
	a.pr();
	b.pr();
}

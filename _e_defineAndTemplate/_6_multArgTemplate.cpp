#include<iostream>
#include<string>
using namespace std;

template <typename N,typename M>
class Contain{
private:
	N n;
	M m;
public:
	Contain(N n,M m){ this->n=n;this->m=m;}
	void pr(){ cout<< n << m << endl;}
};

int main(){
	Contain<int,string> a(100,"qwe");
	a.pr();
}

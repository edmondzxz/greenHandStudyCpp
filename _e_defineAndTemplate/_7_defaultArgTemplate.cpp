#include<iostream>
#include<string>
using namespace std;

template <typename N=int,typename M=string>
class Contain{
private:
	N n;
	M m;
public:
	Contain(N n,M m){ this->n=n;this->m=m;}
	void pr(){ cout<< n << m << endl;}
};

int main(){
	Contain<> a(100,"qwe");
	a.pr();
}

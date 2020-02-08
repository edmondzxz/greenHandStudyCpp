#include<iostream>
using namespace std;
class Base{
public:
	virtual void print(){
		cout<<"Base"<<endl;
	}
};
class Derive:public Base{
public:
	void print(){
		cout<<"Derive"<<endl;
	}
};
class Other{
public:
	int a;
};
int main(){
	Base *basePointer=new Base();
	Derive *derivePointer=new Derive();
	Other *otherPointer=new Other();
	char *p=NULL;
	p=reinterpret_cast<char*>(derivePointer);
	cout<<p<<endl;
	return 0;
}

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
	Base *basePointer=new Base;
	Derive *derivePointer=new Derive;
	Other *otherPointer=new Other;
	basePointer=dynamic_cast<Base*>(derivePointer);
	basePointer->print();
	basePointer=new Base;
	derivePointer=dynamic_cast<Derive*>(basePointer);
	if(derivePointer){
		derivePointer->print();
	}
	else{
		cout<<"fail to cast"<<endl;
	}
	//otherPointer=dynamic_cast<Other>(basePointer);
	return 0;
}

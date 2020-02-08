#include<iostream>
#include<string>
using namespace std;
class Base{
public:
	int a;
	int b;
	Base(int inputa,int inputb)
		:a(inputa), b(inputb) { 
		/*
		a=inputa;
		b=inputb;
		*/
	}
	void pab(){
		pa();
		pb();
	}
	void pa(){
		cout<<"Base a:"<<a<<endl;
	}
	void pb(){
		cout<<"Base b:"<<b<<endl;
	}
	void basepb(){
		Base::pb();
	}
};

class Son:public Base{
public:
	Son():Base(1,2){
	}
	void pb(){
		cout<<"Son b:"<<b<<endl;
	}
};

int main(){
	Base b(10,20);
	Son s;
	b.pa();
	b.pb();
	s.pa();
	s.pb();
	s.basepb();
	s.Base::pb();
}

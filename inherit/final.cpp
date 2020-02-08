#include<iostream>
#include<string>
using namespace std;
class Base final{
public:
	void a(){
		cout<<"Base a"<<endl;
	}
	void b(){
		cout<<"Base b"<<endl;
	}
};

class Son:public Base{
public:
	void b(){
		cout<<"Son b"<<endl;
	}
};

int main(){
	Base b;
	Son s;
	b.a();
	b.b();
	s.a();
	s.b();
}

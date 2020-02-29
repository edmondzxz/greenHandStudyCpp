#include<iostream>
using namespace std;
class Base{
public:
	//define a pure virtual function move
	virtual void move() = 0;
};

class Child:public Base{
public:
	void move(){
		cout<<"fly"<<endl;
	}
};

/*
class Child2:public Base{
public:
};
*/

int main(){
	//Base b;
	Child c;
	//Child2 c2;
	c.move();
	return 0;
}

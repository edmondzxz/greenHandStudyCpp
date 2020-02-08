#include<iostream>
using namespace std;
class Animal{
public:
	virtual void move(){
		cout<<"move"<<endl;
	}
};

class Bird:public Animal{
public:
	void move(){
		cout<<"fly"<<endl;
	}
};

class Bird2:public Animal{
public:
	void move()const{
		cout<<"fly"<<endl;
	}
};

class Bird3:public Animal{
public:
	void move()const override{//Error,does not override
		cout<<"fly"<<endl;
	}
};


void gogogo(Animal& a){
	a.move();
}

int main(){
	Bird b;
	Bird2 b2;
	Bird3 b3;
	cout<<endl<<"Bird"<<endl;
	gogogo(b);
	cout<<endl<<"Bird2"<<endl;
	gogogo(b2);
	cout<<endl<<"Bird3"<<endl;
	gogogo(b3);
	return 0;
}

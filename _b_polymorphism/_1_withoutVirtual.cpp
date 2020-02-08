#include<iostream>
using namespace std;
class Animal{
public:
	void move(){
		cout<<"move"<<endl;
	}
};

class Bird:public Animal{
public:
	void move(){
		cout<<"fly"<<endl;
	}
};

void gogogo(Animal& a){
	a.move();
}

int main(){
	Bird b;
	gogogo(b);
	return 0;
}

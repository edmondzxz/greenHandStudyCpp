#include<iostream>
using namespace std;
class Animal{
public:
	Animal(){
		cout<<"create animal"<<endl;
	}
	~Animal(){
		cout<<"delete animal"<<endl;
	}
};

class Bird:public Animal{
public:
	Bird(){
		cout<<"create bird"<<endl;
	}
	~Bird(){
		cout<<"delete bird"<<endl;
	}
};

void delAnimal ( Animal * pointer ){
	delete pointer;
}

int main(){
	cout<<"create bird pointer"<<endl;
	Bird * pointer = new Bird;
	delAnimal( pointer );
	cout<<endl;
	Bird bird;
	return 0;
}

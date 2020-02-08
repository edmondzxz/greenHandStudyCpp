#include<iostream>
using namespace std;
class Animal{
public:
	int a;
	int b;
	void move(){
		cout<<"move"<<endl;
	}
};

class Animal2{
public:
	int a;
	int b;
	virtual void move(){
		cout<<"move"<<endl;
	}
};

int main(){
	cout<< sizeof(Animal)<<endl;
	cout<< sizeof(Animal2)<<endl;
	return 0;
}

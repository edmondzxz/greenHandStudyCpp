#include<iostream>
#include<string>
using namespace std;
class Human{
public:
	void setName(string newName){
		name=newName;
	}
	string getName(){
		return name;
	}
	void printName(){
		cout<<"name:"<<name<<endl;
	}
private:
	string name;
};

int main(){
	Human h;
	h.setName("Jack");
	h.printName();
}

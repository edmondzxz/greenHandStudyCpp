#include<iostream>
#include<string>
using namespace std;
class Human{
public:
	Human(string name){
		this->name = name;
	}
	Human(){
		this->name = "Adam";
	}
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
	Human h("Jack"),a;
	h.printName();
	a.printName();
	h.setName("Tom");
	h.printName();
}

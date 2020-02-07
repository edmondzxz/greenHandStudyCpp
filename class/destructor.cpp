#include<iostream>
#include<string>

using namespace std;

class Pet{
public:
	string name;
	Pet(){
		name="doggie";
	}
};

class Human{
public:
	string name;
	Pet *pet= NULL ;


	Human(){
		name="Adam";
		pet=new Pet;
	}
};

class Human2
{
public:
	string name;
	Pet *pet= NULL ;

	Human2(){
		name="Adam";
		pet=new Pet;
	}
	~Human2(){
		delete [] pet;
	}
};

int main(){
	Human *h=new Human;
	Pet *p = NULL;
	p = h->pet;
	cout<< "Human name:" << h->name <<endl;
	cout<< "Pet name:" << p->name <<endl;
	delete h;
	//cout<<"h is not NULL"<<h->name<<endl;//illegial, core dump
	cout<< "Pet is not null:" << p->name <<endl;

	Human2 *h2=new Human2;
	Pet *p2 = NULL;
	p2 = h2->pet;
	cout<< "Human2 name:" << h2->name <<endl;
	cout<< "Pet2 name:" << p2->name <<endl;
	//delete  h; //use delete h , p2->name still exists,destrucor would not be executed;
	delete  [] h;
	//cout<<"h is not NULL"<<h2->name<<endl;//illegial, core dump
	cout<< "Pet2 is not null:" << p2->name <<endl;//core dump


}

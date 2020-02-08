#include<string>
#include<iostream>
using namespace std;
class Base{
public:
	string publicStr="base public";
protected:
	string protectedStr="base protected";
private:
	string privateStr="base private";
};

class Child:protected Base{
	public:
	void print(){
		cout<<endl<<"Child print"<<endl;
		cout<<publicStr<<endl;
		cout<<protectedStr<<endl;
		//cout<<privateStr<<endl;
	}
};

class GrandChild:protected Child{
	public:
	void print(){
		cout<<endl<<"GrandChild print"<<endl;
		cout<<publicStr<<endl;
		cout<<protectedStr<<endl;
		//cout<<privateStr<<endl;
	}
};

int main(){
	Child c;
	//c.publicStr;
	//c.protectedStr;
	//c.privateStr;
	c.print();

	GrandChild g;
	//g.publicStr;
	//g.protectedStr;
	//g.privateStr;
	g.print();
}

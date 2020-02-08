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

int main(){
	Base b;
	cout<<b.publicStr<<endl;
	//cout<<b.protectedStr<<endl;//cannot access
	// cout<<b.privateStr<<endl;//cannot access
}

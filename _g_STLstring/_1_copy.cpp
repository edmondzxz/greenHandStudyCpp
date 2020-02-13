#include<iostream>
#include<string>
using namespace std;
int main(){
	string first("first 1");
	string second=first;
	cout<<"first:"<<first<<endl;
	cout<<"second:"<<second<<endl;
	first="first 2";
	cout<<"first:"<<first<<endl;
	cout<<"second:"<<second<<endl;

	string third(first);
	cout<<"first:"<<first<<endl;
	cout<<"third:"<<third<<endl;
	first="first 3";
	cout<<"first:"<<first<<endl;
	cout<<"third:"<<third<<endl;

	const char* ccs= "Hello String!";
	string forth(ccs,5);
	//string fifth(3,first);
	string fifth(3,'b');
	cout<<forth<<endl;
	cout<<fifth<<endl;

	return 0;
}

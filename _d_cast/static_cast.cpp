#include<iostream>
using namespace std;
int main(){
	double Pi=3.14159;
	int p = static_cast<int>(Pi);
	cout<<p<<endl;

	string str="qwer";
	p=static_cast<int>(str);
	cout<<p<<endl;
	return 0;
}

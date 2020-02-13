#include<iostream>
#include<string>
using namespace std;
int main(){
	string a("aaa"),b("bbb"),c("ccc");
	a=a+b;
	c.append(b);
	cout<<a<<endl;
	cout<<c<<endl;
	return 0;
}

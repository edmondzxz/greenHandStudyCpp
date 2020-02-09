#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string a("abcd");
	cout<<a<<endl;
	reverse(a.begin(),a.end());
	cout<<a<<endl;
}

#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<string>

using namespace std;

void intDouble(int &a){
	a=a*2;
}

int main(int argc,char ** args){
	int a=10;
	cout<<a<<endl;
	intDouble(a);
	cout<<a<<endl;
}




#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<string>

using namespace std;

int plusn( int n){
	return n==1?n:( n+plusn(n-1));
}


int main(int argc,char ** args){
	cout<<plusn(10)<<endl;
	cout<<plusn(9)<<endl;
}




#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<string>

using namespace std;

bool coprime(int a,int b){
	for(int i=2;i<(a>b?b:a);i++){
		if( (a%i==0) && (b%i==0)){
			cout<<a<<" "<<b<<" "<<i<<endl;
			return false;
		}
	}
	cout<<a<<" "<<b<<" coprime"<<endl;
	return true;
}

bool coprime(int a,int b,int c){
	int small = a<b ? a:b;
	small = small < c ? small : c;
	for(int i=2;i<small;i++){
		if( (a%i==0) && (b%i==0) && (c%i==0)){
			cout<<a<<" "<<b<<" "<<c<<" "<<i<<endl;
			return false;
		}
	}
	cout<<a<<" "<<b<<""<<c<<" coprime"<<endl;
	return true;
}

int main(int argc,char ** args){
	coprime(10,20);
	coprime(11,20);
	coprime(10,20,30);
	coprime(11,20,30);
}




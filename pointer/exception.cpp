#include<iostream>
using namespace std;
int main(){
	try{
		int *p=new int [0xfffffffffffff];
		delete [] p;
	}
	catch(bad_alloc){
		cout<<"no enough memory,stop running"<<endl;
	}
}

#include<iostream>
using namespace std;
int main(){
	int a=10;
	double d=1.1;
	int *b=NULL;
	double *dd=&d;
	b=&a;
	cout<<"a:"<<a<<endl;
	cout<<"NULL:"<<b<<endl;
	cout<<"b:"<<b<<endl;
	cout<<"*b:"<< *b <<endl;
	cout<<"sizeof double pointer:"<<sizeof(dd)<<endl;
	cout<<"sizeof int pointer:"<<sizeof(b)<<endl;
	return 0;
}

#include<iostream>
using namespace std;

int add(int * b,int length){
	b=new int [10];

	int result=0;
	for(int i=0;i<length;i++)
		result+=b[i];
	return result;
}
int add2(int * const b,int length){
	//b=new int [10];//illegal

	int result=0;
	for(int i=0;i<length;i++)
		result+=b[i];
	return result;
}

int main(){
	int a[]={1,2,3,4,5};
	cout<<add(a,5)<<endl;
	cout<<add2(a,5)<<endl;
}

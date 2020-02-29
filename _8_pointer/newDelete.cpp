#include<iostream>
using namespace std;
int main(){
	int a=100;
	int *intPointer = new int[10];
	int *pointer = new int;
	int i=0;
	for(int i=0;i<10;i++){
		intPointer[i]=i;
	}
	for(int i=0;i<10;i++){
		cout<<intPointer[i]<<",";
	}
	cout<<endl;
	for(int i=0;i<10;i++){
		cout<<*(intPointer+i)<<",";
	}
	delete [] intPointer;
	delete [] pointer;
	cout<<endl;
}

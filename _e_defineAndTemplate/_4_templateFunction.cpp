#include<iostream>
using namespace std;

template <typename T>
void printMin(T a,T b){
	cout<<( a<b ? a:b )<<endl;
}


int main(){
	printMin<double>(3.15,3.14);
	printMin<int>(3,4);
	return 0;
}

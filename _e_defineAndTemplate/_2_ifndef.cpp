#define BBB

#ifndef AAA
#define XXX 10
#endif

#ifndef BBB
#define XXX 100
#endif

// use ifndef to avoid include recursion

#include<iostream>
using namespace std;
int main(){
	cout<<XXX<<endl;
	return 0;
}

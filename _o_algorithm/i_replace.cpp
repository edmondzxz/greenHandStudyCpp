#include<algorithm>
#include<iostream>
#include<vector>
#include"range.cpp"
#include"printc.cpp"
using namespace std;

void replaceWithVal(vector<int>&va,const int &val,const int &newVal){
	replace(va.begin(),va.end(),val,newVal);
}

void example(){
	vector<int>va;
	va=range(10,20);
	printc( va );
	replaceWithVal(va,11,100);
	printc( va );
}

int main(){ example();return 0;}

#include<algorithm>
#include<iostream>
#include<vector>
#include"range.cpp"
#include"printc.cpp"
using namespace std;

void removeVal(vector<int>&va,int val){
	auto newEnd=remove(va.begin(),va.end(),val);
	va.erase(newEnd,va.end());
}

vector<int>copyLength(const vector<int>&va,const int &length){
	vector<int>vb(length);
	copy(va.begin(),va.end(),vb.begin());
	return vb;
}

void example(){
	vector<int>va;
	va=range(10,20);
	printc( va );
	removeVal(va,11);
	printc( va );

	printc( copyLength( va,5));
}

int main(){ example();return 0;}

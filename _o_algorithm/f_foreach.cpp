#include<algorithm>
#include<iostream>
#include<vector>
#include"range.cpp"
#include"printc.cpp"
using namespace std;

void example(){
	vector<vector<int>>va(2);
	for_each( va.begin(),va.end(),[](vector<int>&vva){ vva.push_back(100);});
	for_each( va.begin(),va.end(),[](vector<int>vva){ printc(vva);});
}

int main(){ example();return 0;}

#include<algorithm>
#include<iostream>
#include<vector>
#include"range.cpp"
#include"printc.cpp"
using namespace std;

vector<int>randGenerate(int length ){
	srand(1);
	vector<int>va( length );
	generate( va.begin() , va.end() , rand ); 
	return va;
}

void example(){
	printc( randGenerate(10));
}

int main(){ example();return 0;}

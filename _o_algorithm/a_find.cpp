#include<algorithm>
#include<iostream>
#include<vector>
#include"range.cpp"
#include"printc.cpp"
using namespace std;

void findIntInVector(vector<int>va,int a){
	auto element = find(va.begin(),va.end(),a);
	if(element != va.end()){
		cout << endl << a << " found" << endl;
	}
	else{
		cout << endl << a << " not found" << endl;
	}
}

void findIfModFiveInVector (vector<int>va,int val){
	auto element = find_if(va.begin(),va.end(),
		[val](int e){ return e%val == 0;}		
	);
	if(element != va.end()){
		cout << endl << *element << " mod " << val << endl;
	}
	else{
		cout << endl << "not found mod " << val << endl;
	}
}

void example(){
	vector<int>va;
	va=range(10,20);
	printc( va );
	findIntInVector( va,7);
	findIntInVector( va,11);
	findIfModFiveInVector( va,5);
	findIfModFiveInVector( va,100);
}

int main(){ example();return 0;}

#include<algorithm>
#include<iostream>
#include<vector>
#include"range.cpp"
#include"printc.cpp"
using namespace std;

void countIntInVector(vector<int>va,int a){
	auto counter = count(va.begin(),va.end(),a);
	cout << "found " << counter << " times " << a << endl;
}

void countIfModFiveInVector (vector<int>va,int val){
	auto counter = count_if(va.begin(),va.end(),
		[val](int e){ return e%val == 0;}		
	);
	cout <<	"found ";
	cout <<	counter	;
	cout << " times ";
	cout <<	" mod "	;
	cout <<	val	;
	cout << endl	;
}

void example(){
	vector<int>va;
	va=range(10,20);
	va.push_back(10);
	printc( va );
	countIntInVector( va,10);
	countIntInVector( va,11);
	countIfModFiveInVector( va,5);
	countIfModFiveInVector( va,100);
}

int main(){ example();return 0;}

#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include"range.cpp"
#include"printc.cpp"
using namespace std;

string lower(string str){
	string res;
	res.resize (str.size());
	transform (str.cbegin(),str.cend(),res.begin(), ::tolower);
	return res;
}

vector<int>square(vector<int>va){
	vector<int>vb(va.size());
	transform(va.cbegin(),va.cend(),vb.begin(),[](int a){return a*a;});
	return vb;
}

void example(){
	cout<< lower("QWEqwe") << endl;
	vector<int>va;
	va=range(1,11);
	printc(va);
	printc(square(va));
}

int main(){ example();return 0;}

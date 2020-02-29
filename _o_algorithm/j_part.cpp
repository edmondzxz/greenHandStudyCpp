#include<algorithm>
#include<iostream>
#include<vector>
#include"range.cpp"
#include"printc.cpp"
using namespace std;

bool isEven(int a){
	return a%2==0;
}

void example(){
	vector<int>va=range(10,20);
	printc( va );
	auto x = partition( va.begin(),va.end(),isEven);
	printc( va );
	for_each(va.begin(),x,[](int a){cout<<a<<",";});
	cout<<endl;
	for_each(x,va.end(),[](int a){cout<<a<<",";});
	cout<<endl;
	// the other one is stable_partition
	// stable_partition doesnot change the order of elements in the container
}

int main(){ example();return 0;}

#include <vector>
#include<iostream>
using namespace std;

void print(vector<int> i){
	cout<<endl;
	for(int x:i){
		cout<<x<<",";
	}
	cout<<endl;
}

void printSize(vector<int>i){
	cout<<"vector size:"<<i.size()<<endl;
	cout<<"vector capacity:"<<i.capacity()<<endl;
}

int main ()
{
	vector<int> i;
	for(int z=1;z<512;z++){
		i.push_back(z);
	}
	printSize(i);
	for(int z=1;z<100;z++){
		i.push_back(z);
	}
	printSize(i);
	for(int z=1;z<100;z++){
		i.pop_back();
	}
	printSize(i);

	return 0;
}

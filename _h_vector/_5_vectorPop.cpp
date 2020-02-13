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

int main ()
{

	vector<int> i{ 202, 2017, -1 };
	print(i);
	i.push_back(999);
	print(i);
	i.pop_back();
	print(i);
	return 0;
}

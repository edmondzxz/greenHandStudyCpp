#include <vector>
#include<iostream>
using namespace std;

int main ()
{

	vector<int> i{ 202, 2017, -1 };
	i[1]=99;
	for(int x:i){
		cout<<x<<",";
	}
	cout<<endl;

	return 0;
}

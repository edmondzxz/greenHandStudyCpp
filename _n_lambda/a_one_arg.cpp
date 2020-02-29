#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

template <typename T>
void printC(const T& c, string str="c begin"){
	cout<<endl<<str<<endl;
	for (auto e = c.cbegin(); e != c.cend(); ++e){
		cout << *e << ' ';
	}
	cout<<endl<<"c end"<<endl;
}

vector<int> range(int min,int max){
	vector<int>va;
	for(int i=max;i>=min;i--){
		va.push_back(i);
	}
	return va;
}

int main(){
	vector<int>va;
	va=range(10,20);
	printC( va );
	for_each(va.cbegin(),va.cend(),[](auto & e){
		cout<<e*e<<endl;		
	});
	printC( va );
	return 0;
}

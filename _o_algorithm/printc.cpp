#include<iostream>
using namespace std;

template <typename T>
void printc(const T & c, string str="c begin"){
	cout<<endl<<str<<endl;
	for (auto e = c.cbegin(); e != c.cend(); ++e){
		cout << *e << ' ';
	}
	cout<<endl<<"c end"<<endl;
}

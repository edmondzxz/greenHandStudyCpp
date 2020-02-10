#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

// struct that behaves as a unary function
template <typename T>
struct printCon {
	int count;
	printCon(){
		count=0; }
	void operator () (const T& e) {
		count=count+1;
		cout << e << ' '; } };

int main () {
	vector <int> va{ 0, 1, 2, 3, -1, -9, 0, -999 };
	printCon<int> status;
	
	status = for_each (va.begin (), // Start of range
	va.end (), // End of range
	printCon<int> () ); // Unary function object

	cout<<endl;

	cout<< status.count << endl;
	
	return 0; }

#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
// A structure as a unary predicate
template <typename T>
struct Mult {
	T div;
	Mult (const T& bas) {
		div = bas; }
	bool operator () (const T& ele) const {
		return ((ele % div) == 0); } };
	
// insert code from Listing 21.3 here

int main ()
{
	vector <int> va{ 25, 26, 27, 28, 29, 30, 31 };
	cout << "The vector contains: 25, 26, 27, 28, 29, 30, 31" << endl;
	cout << "Enter bas (> 0): ";
	int bas = 2;
	cin >> bas;
	auto ele = find_if (va.begin (),
	va.end (),
	Mult<int>(bas) );
	if (ele != va.end ()) {
		cout << "get:" << bas;
		cout << ": " << *ele << endl; }
	return 0; }

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

// struct that behaves as a unary function
template <typename T>
struct printCon
	{
	void operator () (const T& e) const {
		cout << e << ' '; 
	}
};

int main ()
{
	vector <int> va{ 0, 1, 2, 3, -1, -9, 0, -999 };
	
	for_each (va.begin (), // Start of range
	va.end (), // End of range
	printCon<int> () ); // Unary function object
	cout<<endl;
	
	
	// Display the list of characters 
	list <char> la{ 'a', 'z', 'k', 'd' };
	
	for_each (la.begin(),
	la.end(),
	printCon<char> () );
	cout<<endl;
	
	return 0;
}

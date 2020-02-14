#include <iostream>
#include<exception>
using namespace std;

int main()
{
	cout << "Enter number of integers you wish to reserve: ";
	try
	{
		int input = 0;
		cin >> input;
		input *= 1000000000;
		// Request memory space and then return it
		int* numArray = new int [input];
		delete[] numArray;
	}
	catch( std::bad_alloc & exp ){
		cout << "Exception encountered : " << exp.what() << endl;
		cout << "Go to end , sorry! " << endl;
	}
	catch (...)
	{
		cout << "Exception occurred. Got to end, sorry!" << endl;
	}
	return 0;
}

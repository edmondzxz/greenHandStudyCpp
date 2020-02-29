#include<iostream>
#include<string>
using namespace std;

struct StructA {
	string str;
	StructA(string input) {
		str = input;
		cout << "StructA constructor " << str << endl; 
	}
	~StructA() {cout << "StructA destructor" << str << endl; }
};

struct StructB {
	string str;
	StructB(string input) {
		str = input;
		cout << "StructB constructor " << str << endl; }
	~StructB() {cout << "StructB destructor" << str << endl; }
};
void FuncB() // throws
{
	cout << "In Func B" << endl;
	StructA objA(" FuncB ");
	StructB objB(" FuncB ");
	cout << "About to throw up!" << endl;
	throw "Throwing for the heck of it";
}

void FuncA()
{
	try
	{
		cout << "In Func A" << endl;
		StructA objA( " FuncA ");
		StructB objB( " FuncA ");
		FuncB();
		cout << "FuncA: returning to caller" << endl;
	}
	catch(const char* exp)
	{
		cout << "FuncA: Caught exception: " << exp << endl;
		cout << "Handled it, will not throw to caller" << endl;
		// throw; // uncomment this line to throw to main()
	} 
}


int main()
{
	cout << "main(): Started execution" << endl;
	try {
		FuncA();
	}
	catch(const char* exp) {
		cout << "Exception: " << exp << endl;
	}
	cout << "main(): exiting gracefully" << endl;
	return 0;
}

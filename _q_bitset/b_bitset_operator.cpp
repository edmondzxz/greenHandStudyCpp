#include<bitset>
#include<iostream>
#include<string>

using namespace std;

void example(){
	bitset<5>a("10101");
	bitset<5>b("11010");
	// bitset operators
	// <<
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	// operator >>
	//bitset<5>c;
	//"11111" >> c;// error, no such operator
	//cout << c << endl;
	
	// operator & 
	cout << " ( a & b ) : ";
	cout << ( a & b ) << endl;

	// operator |
	cout << " ( a | b ) : ";
	cout << ( a | b ) << endl;

	// operator ^
	cout << " ( a ^ b ) : ";
	cout << ( a ^ b ) << endl;

	// operator ~
	cout << " ( ~ b ) : ";
	cout << ( ~ b ) << endl;

	// operator >>=
	b >>= (2);
	cout << " b >>= (2), then b:";
	cout << b << endl;

	// operator <<=
	a <<= (2);
	cout << " a <<= (2), then a:";
	cout << a << endl;

	// operator []
	cout << " a[2] = " << a[2] << endl;
	a[2] = 0;
	cout << " a[2] = 0, then a:" << a << endl;
	

}

int main(){example();return 0;}

#include<iostream>
#include<exception>
using namespace std;

double divide(double dividend,double divisor){
	if( divisor == 0 ){
		throw "divisor is 0, quit";
	}
	return dividend / divisor;
}

int main(){
	double dividend = 1,divisor = 1;
	cout << "type in dividend:" << endl;
	cin >> dividend;
	cout << "type in divisor:" << endl;
	cin >> divisor;
	try{
		cout << "result : " << divide( dividend , divisor ) << endl;
	}
	catch( const char * exp ){
		cout << "exception : " << exp << endl;
	}
	return 0;
}

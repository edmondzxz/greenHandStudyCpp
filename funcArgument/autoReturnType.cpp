#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<string>

using namespace std;

//#define PI = 3.14;
const double PI = 3.14;

auto area(double r){
	return r*r*PI;
}

int main(){
	int i=10;
	double d=1.1;
	cout<<"typeid int : "<<typeid(int).name()<<endl;
	cout<<"typeid double : "<<typeid(double).name()<<endl;
	cout<<typeid(area(10)).name()<<endl;
	cout<<typeid(area(0)).name()<<endl;
	cout<<typeid(area(11)).name()<<endl;
	cout << "11:"<<area(11) << endl;
	cout << "10:"<<area(10) << endl;
}




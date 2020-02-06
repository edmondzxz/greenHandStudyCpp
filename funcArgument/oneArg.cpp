#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int triple(int a){
	return a*3;
	// how to avoid overflow?
}

int main(int argc,char ** args){
	if(argc<2){
		cout<<"no enough arguments"<<endl;
	}
	else{
		int a=0;
		stringstream stream;
		stream << args[1];
		stream >> a;
		cout <<"triple a:"<<triple(a)<<endl;
	}
}




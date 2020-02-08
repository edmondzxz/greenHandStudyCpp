#include<iostream>
#include"Alphabet.cpp"
using namespace std;

int main(){
	Alphabet first('a');
	Alphabet second('A');
	cout << (first+second)<<endl;
	return 0;
}

#include<bitset>
#include<iostream>
#include<string>

using namespace std;

void example(){
	bitset<8>ba("10101111");
	bitset<8>bb(63);

	cout<< ba << endl;
	cout<< bb << endl;

	ba=15;
	//bb.set("10101010");//error

	cout<< ba << endl;
	cout<< bb << endl;
}

int main(){example();return 0;}

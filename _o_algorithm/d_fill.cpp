#include<iostream>
#include<vector>
#include<set>
#include<list>
#include"printc.cpp"

void fillVectorWithVal( vector<int>&va,int val){
	fill(va.begin(),va.end(),val);
}

void fillVectorWithMultiVal(vector<int>&va,int offset,int length,int val){
	fill_n( va.begin() + offset , length , val );
}

void example(){

	vector<int>va(10);
	fillVectorWithVal( va , 999 );

	//fill(va.begin(),va.end(),99);

	printc ( va );

	fillVectorWithMultiVal( va , 3,4,-100);
	printc( va );
	
}

int main(){
	example();
	return 0;
}

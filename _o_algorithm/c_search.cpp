#include<algorithm>
#include<iostream>
#include<vector>
#include<list>
#include"range.cpp"
#include"printc.cpp"
using namespace std;

void searchListInVector(vector<int>va,list<int>lb){
	auto searcher = search(
		va.cbegin(),
		va.cend(),
		lb.cbegin(),
		lb.cend());
	if( searcher != va.end()){
		cout << "found, distance: " ;
		cout << distance(va.cbegin(),searcher);
		cout << endl << *searcher << endl;
	}
	else{
		cout << "not found" << endl;
	}
}

void example(){
	vector<int>va;
	va=range(10,100);
	list<int>lb,lc;

	for(int i:range(2,10)){
		lb.push_back(i);
	}
	for(int i:range(31,32)){
		lc.push_back(i);
	}

	searchListInVector( va , lb );
	searchListInVector( va , lc );

}

int main(){ example();return 0;}


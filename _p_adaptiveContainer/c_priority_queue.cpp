#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>

#include"../common/range.cpp"
#include"../common/printc.cpp"

using namespace std;

void printPqueue(priority_queue<int>sa){
	while(!sa.empty()){
		cout<<sa.top()<<',';
		sa.pop();
	}
	cout<<endl<<endl;
}

void example(){
	priority_queue<int>sa;
	cout<<"push 88~99 into Pqueue"<<endl;
	for(int x:range( 40, 49)){
		sa.push( x );
		cout<<x<<",";
	}
	for(int x:range( 20, 29)){
		sa.push( x );
		cout<<x<<",";
	}
	cout<<endl<<endl;
	cout<<"take value out of Pqueue"<<endl;
	printPqueue( sa );
}

int main(){ example();return 0;}

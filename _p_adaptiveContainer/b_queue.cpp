#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>

#include"../common/range.cpp"
#include"../common/printc.cpp"

using namespace std;

void printQueue(queue<int>sa){
	while(!sa.empty()){
		cout<<sa.front()<<", size:"<<sa.size()<<endl;
		sa.pop();
	}
	cout<<endl<<endl;
}

void example(){
	queue<int>sa;
	cout<<"push 88~99 into queue"<<endl;
	for(int x:range( 88 , 99 )){
		sa.push( x );
		cout<<x<<","<<" size:"<<sa.size()<<endl;
	}
	cout<<endl<<endl;
	cout<<"take value out of queue"<<endl;
	printQueue( sa );
}

int main(){ example();return 0;}

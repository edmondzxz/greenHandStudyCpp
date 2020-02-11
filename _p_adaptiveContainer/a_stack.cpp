#include<algorithm>
#include<iostream>
#include<vector>
#include<stack>

#include"../common/range.cpp"
#include"../common/printc.cpp"

using namespace std;

void printStack(stack<int>sa){
	while(!sa.empty()){
		cout<<sa.top()<<',';
		sa.pop();
	}
	cout<<endl<<endl;
}

void example(){
	stack<int>sa;
	cout<<"push 88~99 into stack"<<endl;
	for(int x:range( 88 , 99 )){
		sa.push( x );
		cout<<x<<",";
	}
	cout<<endl<<endl;
	cout<<"take value out of stack"<<endl;
	printStack( sa );
}

int main(){ example();return 0;}

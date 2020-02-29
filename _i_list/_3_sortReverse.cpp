#include<list>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

void printList(list<int>l,string str="list begin"){
	cout<<endl<<str<<endl;
	for(int x:l){
		cout<<x<<",";
	}
	cout<<endl<<"list end"<<endl;
}

bool bigger(const int & a,const int & b){
	return a>b;
}

int main(){
	list<int>la{3,0,3,9,5};
	printList(la);
	la.reverse();
	printList(la);

	list<int>lb{3,9,6,4,5};
	printList(lb,"before sort");
	lb.sort();
	printList(lb,"after sort");
	lb.sort( bigger );
	printList(lb,"after another sort");

	return 0;
}

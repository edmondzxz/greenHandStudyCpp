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

int main(){
	list<int>la{1,2,3,4,5};
	auto lit = la.insert ( la.begin() , 999 ) ;
	printList( la );

	la.erase( lit );

	printList( la );

	la.erase( la.begin(), la.end() );

	printList( la );

	return 0;
}

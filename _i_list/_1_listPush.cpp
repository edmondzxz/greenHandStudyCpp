#include<list>
#include<vector>
#include<string>
#include<iostream>

using namespace std;

void printList(list<int>l,string str="list begin"){
	cout<<endl<<str<<":"<<endl;
	for(int x:l){
		cout<<x<<",";
	}
	cout<<endl<<"list end"<<endl;
}

int main(){
	list<int>la{1,1,1};
	list<int>lb{3,3,3};

	la.push_front(2);
	la.push_back(2);
	printList(la,"la");

	la.insert( la.begin(),100);
	printList(la,"la");

	la.insert(la.end(), lb.begin(),lb.end());
	printList(la,"la");

	return 0;
}

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
	vector<int>va{1,2,3,4,5};

	list<int>la;
	printList(la);

	list<int>lb(10);
	printList(lb);

	list<int>lc(10,99);
	printList(lc);

	list<int>ld{1,2,3,4,5};
	printList(ld);

	list<int>le(va.begin(),va.end());
	printList(le);
}

#include<iostream>
#include<set>

using namespace std;

template <typename T>
void printContainer(const T& container, string str="container begin"){
	cout<<endl<<str<<endl;
	for (auto element = container.cbegin(); element != container.cend(); ++element){
		cout << *element << ' ';
	}
	cout<<endl<<"container end"<<endl;
}

int main(){
	set<int>sa{1,1,2,3};
	printContainer(sa);
	sa.insert(100);
	printContainer(sa);
	sa.insert(100);
	printContainer(sa);

	multiset<int>ma{1,1,2,3};
	printContainer(ma);
	ma.insert(222);
	printContainer(ma);
	ma.insert(222);
	printContainer(ma);
	cout << ma.count( 1 ) << endl;

	return 0;
}



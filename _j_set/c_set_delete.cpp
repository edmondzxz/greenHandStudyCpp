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
	set<int> sa{1,2,3,4,5};
	printContainer( sa );
	sa.erase(3);
	printContainer( sa );

	auto element = sa.find(2);
	auto element2 = sa.find(5);
	sa.erase( element , element2 );
	printContainer( sa );

	return 0;
}



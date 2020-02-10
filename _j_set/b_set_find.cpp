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

template <typename T,typename Y>
void find(const T& container,const Y& val){
	auto element = container.find(val);
	if(element == container.end())
		cout<<"not found"<<endl;
	else
		cout<<"find "<< *element << endl;
}


int main(){
	set<int>sa{1,1,2,3};
	find( sa , 1 );
	find( sa , 100 );
	return 0;
}



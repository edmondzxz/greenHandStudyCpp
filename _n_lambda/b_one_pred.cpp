#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

template <typename T>
void printC(const T& c, string str="c begin"){
	cout<<endl<<str<<endl;
	for (auto e = c.cbegin(); e != c.cend(); ++e){
		cout << *e << ' ';
	}
	cout<<endl<<"c end"<<endl;
}

vector<int> range(int min,int max){
	vector<int>va;
	for(int i=max;i>=min;i--){
		va.push_back(i);
	}
	return va;
}

int main(){
	vector<int>va;
	va=range(10,20);
	printC( va );

	//vector<int>::lterator odd;
	auto odd = find_if( va.cbegin(),va.cend(),[](auto x){ 
		return x%2; });

	if( odd != va.end()){
		cout << endl << "odd found:" << *odd << endl;
	}
	else{
		cout<< "not found" << endl;
	}

	int divisor=3;
	auto modThree = find_if( va.cbegin(),va.cend(),[ divisor ](auto x){ 
		return (x%divisor==0); });

	if( modThree != va.end()){
		cout << endl << "modThree found:" << *modThree << endl;
	}
	else{
		cout<< "not found" << endl;
	}



	printC( va );
	return 0;
}

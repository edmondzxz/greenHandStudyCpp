#include<iostream>
#include<set>
#include<map>

using namespace std;

template <typename T>
void printMap(const T& container, string str="container begin"){
	cout<<endl<<str<<endl;
	for (auto element = container.cbegin(); element != container.cend(); ++element){
		cout << element->first <<"	:"<< element->second<<endl;
	}
	cout<<"container end"<<endl<<endl;
}

int main(){
	map<string,string> ma;
	ma.insert(pair<string,string>("first","aa"));
	ma.insert(make_pair("second","bb"));
	ma.insert(make_pair("third","cc"));
	printMap( ma );

	ma.erase("aa");
	printMap( ma );

	ma.erase("first");
	printMap( ma );

}



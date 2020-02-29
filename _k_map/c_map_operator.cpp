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

struct keyInOrder{
	bool operator ()( const string k1,const string k2) const {
		// cout<<k1.length()<<endl;
		if( k1.length() == k2.length() ){
			return  (k1 < k2);
		}
		else{
			return ( k1.length() < k2.length() );
		}
	}
};

int main(){
	map<string,string,keyInOrder> ma;

	ma.insert(pair<string,string>("f","aa"));
	ma.insert(make_pair("thi","cc"));


	printMap( ma );

	ma.insert(make_pair("se","bb"));
	ma.insert(make_pair("four","bb"));
	printMap( ma );

	return 0;
}



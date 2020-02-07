#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void pr(vector<int> a){
	cout<<endl<<"print vector"<<endl;
	for_each(a.begin(),a.end(),[](int e){
		cout<<e<<" , ";
	});
	cout<<endl;
}

int main(int argc,char ** args){
	vector<int> a{8,7,3,4,5};

	pr(a);

	sort(a.begin(),a.end(),[](int a,int b){
		return a>b;
	});

	pr(a);

	sort(a.begin(),a.end(),[](int a,int b){
		return a<b;
	});

	pr(a);

}




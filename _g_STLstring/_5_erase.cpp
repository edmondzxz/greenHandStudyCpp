#include<iostream>
#include<string>
using namespace std;
int main(){
	string sampleStr ("Hello String! Wake up to a beautiful day!");
	sampleStr.erase (0,12); // Hello String!
	cout<<sampleStr<<endl;
	return 0;
}

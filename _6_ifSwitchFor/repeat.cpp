//example
#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<string>

using namespace std;

bool isPrime(int n){
	if(n==1){return false;}
	if(n==2){return true;}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

// find prime integers between 10 and 10000
int main(){
	int start = 1;
	int end = 88;
	int i=0;

	// for loop
	for(i=start;i<=end;i++)
		if(isPrime(i))
			cout<<i<<",";
	cout<<endl<<endl;

	//while loop
	i=start;
	while(true){
		if(isPrime(i))
			cout<<i<<",";
		i++;
		if(i>end)
			break;
	}
	cout<<endl<<endl;

	//do while loop
	i=0;
	do{
		if(i<start){
			i++;
			continue;
		}
		if(isPrime(i))
			cout<<i<<",";
		i++;
		if(i>end)
			break;
	}
	while(true);
	cout<<endl<<endl;

	//goto loop
	cout<<"goto loop"<<endl;
	i=start;
Point:
	if(isPrime(i))
		cout<<i<<",";
	i++;
	if(i<=end)
		goto Point;
	cout<<endl<<endl;

	//for in
	cout<<"for in"<<endl;
	vector<int> v(3);
	v[0]=1;
	v[1]=10;
	v[2]=100;
	
	
	//int e=0;
	//for(e=0;e<3;e++){
	int ele;
	for(int ele : v){
	
		cout<<ele<<endl;
	}
	//for(int ele=0;ele<3;ele++){cout<<v[ele]<<endl;}
}




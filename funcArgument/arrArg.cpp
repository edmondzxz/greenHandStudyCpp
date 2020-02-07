#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<string>

using namespace std;

int addArr(int arr[] ,int length){
	int result=0;
	for(int i=0;i<length;i++)
		result+=arr[i];
	return result;
}
	


int main(int argc,char ** args){
	int arr[]={1,2,3,4,5};
	cout<<addArr(arr,5)<<endl;
	return 0;
}




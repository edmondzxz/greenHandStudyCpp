//char 
//arr
//c style string
//string
#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>

using namespace std;

void pr(char * c){
	cout<<"\nprint char c"<<endl;
	cout<<"sizeof c :"<<sizeof(c)<<endl;
	cout<<c<<endl;
}

int main(){
	char sayhello []= {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd', '!', '\0'};

	cout<<"\nprint char c"<<endl;
	cout<<"sizeof c :"<<sizeof(sayhello)<<endl;
	cout<<sayhello<<endl;

	sayhello[5]='\0';

	cout<<"\nprint char c"<<endl;
	cout<<"sizeof c :"<<sizeof(sayhello)<<endl;
	cout<<sayhello<<endl;

	char usrinput[6]={'\0'};
	cout<<"enter a line no more than 5 words!"<<endl;
	cin>>usrinput;
	cout<<"usrinput length:"<< strlen(usrinput)<<endl;
	cout<<usrinput<<endl;

}


//{'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'}

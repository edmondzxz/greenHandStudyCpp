//example
#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<string>

using namespace std;

// copy string a to char[] b, only copy a,b,c,d;
int main(){
	int i=0;
	char c='\0';
	string str(""),strif(""),strswitch("");
	cin>>str;
	cout<<endl<<"you input string:"<<str<<endl<<endl;
	for(;i<str.length();i++){
		c=str[i];
		if( c=='a'){
			strif=strif+str[i];
		}
		else if( c=='b'){
			strif=strif+str[i];
		}
		else if( c=='c'){
			strif=strif+str[i];
		}
		else if( c=='d'){
			strif=strif+str[i];
		}
		else{
			;
		}
	}
	for(;i<str.length();i++){
		c=str[i];
		switch(c){
			case 'a':
				strswitch+=c;
				break;
			case 'b':
				strswitch+=c;
				break;
			case 'c':
				strswitch+=c;
				break;
			case 'd':
				strswitch+=c;
				break;
		}
	}
	cout<<"strif:"<<strif<<endl<<endl;
	cout<<"strswitch:"<<strif<<endl<<endl;
}

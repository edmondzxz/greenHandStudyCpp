//example
#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<string>

using namespace std;

int main(){
string str("this is string");
cout<<str<<endl;

cout<<endl<<"typein a line of text"<<endl;
string firstline;
getline(cin,firstline);
cout<<endl<<"print input: "<<firstline<<endl;


cout<<endl<<"typein another line of text"<<endl;
string secondline;
getline(cin,secondline);
cout<<endl<<"print input: "<<secondline<<endl;

string concatstring = firstline + secondline;
cout<<endl<<"concat string:"<<concatstring<<endl;

string copystring=concatstring;
cout<<endl<<"copy string:"<<copystring<<endl;

cout<<endl<<"equals:"<< ( concatstring == copystring) << endl;

concatstring[1]='!';
cout<<endl<<"concat string:"<<concatstring<<endl;
cout<<endl<<"copy string:"<<copystring<<endl;
cout<<endl<<"equals:"<< ( concatstring == copystring) << endl;

cout<<endl<<"length:"<<concatstring.length()<<endl;
concatstring +='#';
cout<<endl<<"length:"<<concatstring.length()<<"concatstring:"<<concatstring<<endl;
concatstring +="@@@";
cout<<endl<<"length:"<<concatstring.length()<<"concatstring:"<<concatstring<<endl;

}




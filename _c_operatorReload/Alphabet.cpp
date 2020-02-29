#include<iostream>
#include<sstream>
#include<string>
#include<cstdlib>
using namespace std;
class Alphabet{
public:
	char alpha;
	string output;

	Alphabet(char input){
		alpha=input;
	}
	~Alphabet(){
	}
	void print(){
		cout<<"alpha:"<<alpha<<" ascll:"<<((int)alpha )<<endl;
	}
	char next(int i){
		if(alpha<97){ //A to Z
			alpha=(alpha-65+i+26)%26+65;
		}
		else{ //a to z
			alpha = (alpha-97+i+26)%26+97;
		}
		return alpha;
	}
	Alphabet& operator++ () {
		next(1);
		return *this;
	}
	Alphabet& operator-- () {
		next(-1);
		return *this;
	}
	Alphabet operator ++ (int) {
		Alphabet copy(alpha);
		next(1);
		return copy; // copy of instance before increment returned
	}

	int charToInt(char a){
		int num=a;
		if(num<96){
			num=num-65+1+26;}
		else{
			num=num-97+1; }
		return num;
	}
	char intToChar(int num){
		char output='\0';
		if(num<27){
			output=num+97-1;
		}
		if(num>26){
			output=num+65-1-26;
		}
		return output;
	}

	Alphabet operator + ( Alphabet input ){
		char c;
		int num1=charToInt( this->alpha);
		int num2=charToInt( input.alpha);
		c=intToChar((num1+num2)%52);
		Alphabet result(c);
		return result;
		
	}
 	operator const char*() {
 		ostringstream formatted; // assists string construction
		formatted<<"alpha:"<<alpha<<" ascll:"<<((int)alpha );
		output=formatted.str();
		return output.c_str();
	}
};
/*
alpha:a ascll:97
alpha:z ascll:122
alpha:A ascll:65
alpha:Z ascll:90
*/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Human{
public:
	char * buffer=NULL;
	Human(const char * initBuf){
		buffer = new char[strlen(initBuf)+1];
		strcpy( buffer,initBuf);
	}
	~Human(){
		delete [] buffer;
	}
	Human(const Human& copySource){
		if(copySource.buffer != NULL){
			buffer = new char[strlen(copySource.buffer)+1];
			strcpy( buffer,copySource.buffer);
		}
	}
	void pr(){
		cout<< buffer << endl;
	}
};

void print( Human h){
	h.pr();
}

int main(){
	Human h("human");
	print(h);
	h.pr();
}

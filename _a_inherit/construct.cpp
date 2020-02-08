#include<string>
#include<iostream>
using namespace std;
class Base{
	public:
	Base(){
		cout<<"construct base"<<endl;
		}
	~Base(){
		cout<<"destruct base"<<endl;
		}
	};

class Child:Base{
	public:
	Child(){
		cout<<"construct child"<<endl;
		}
	~Child(){
		cout<<"destruct child"<<endl;
		}
	};

int main(){
	Child c;
	return 0;
	}

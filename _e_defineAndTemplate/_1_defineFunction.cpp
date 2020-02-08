#include<iostream>
using namespace std;
#define PI 3.14159
#define AREA(r) ((r)*(r)*PI)
#define AREA2(r) (r*r*PI)

int main(){
	cout<<AREA(4+6)<<endl;
	cout<<AREA2(4+6)<<endl;
	return 0;
}

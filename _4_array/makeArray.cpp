//shuzu
//array
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
const int ARRAY_LENGTH = 5;

int myNumbers [ARRAY_LENGTH] = {34, 56, -21, 5002, 365};	
printf("\nprint arr\n");
for( int i:myNumbers){
	printf("%d\n",i);
}

for( int i:myNumbers){
	i=10;
}

printf("\nprint arr\n");
for( int i:myNumbers){
	printf("%d\n",i);
}

int i=0;
for( i=0;i<5;i++){
	printf("myNumbers[%d]=%d\n",i,myNumbers[i]);
}


int arrstartwith0 [10]={};
cout<<endl<<"arr start with 0"<<endl;
for(int z:arrstartwith0){
	cout<<z<<",";
}
cout<<endl<<endl;

}

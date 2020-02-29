#include<iostream>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<string>
#include<ctime>

using namespace std;

void half(int &a){
	a=a/2;
}

inline void half2(int &a){
	a=a/2;
}

void intDouble(int &a){
	half(a);
	half(a);
	a=a*8;
}

inline void intDouble2(int &a){
	half2(a);
	half2(a);
	a=a*8;
}

int main()
{
clock_t start_t, end_t;
double total_t;
int i;
int a=2;

start_t = clock();
for(i=0; i< 100000; i++){
        a++;
        intDouble(a);
}
end_t = clock();
total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;

cout<<"total time: "<<total_t<<endl;

start_t = clock();
for(i=0; i< 100000; i++){
        a++;
        intDouble2(a);
}
end_t = clock();
total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;

cout<<"inline total time: "<<total_t<<endl;


return 1 ;
}




#include <vector>
#include<iostream>
using namespace std;

int main ()
{
std::vector<int> i;
i.insert( i.begin(),100);
i.insert( i.begin(),10);
i.insert( i.end(),200);
i.insert(i.begin(),9,111);
for(int x:i){
	cout<<x<<",";
}
cout<<endl;
return 0;
}

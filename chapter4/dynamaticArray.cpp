//xiangliang
//vector
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;


void pr( vector<int> dynarr ){
	cout<<"\nprint arr size:"<<dynarr.size() <<endl;
	for(int i=0;i<dynarr.size();i++){
		cout<<"dynarr["<<i<<"]:"<<dynarr[i]<<endl;
	}
	cout<<endl;
}


int main(){
vector<int> dynarr(3);
dynarr[0]=100;
dynarr[1]=110;
dynarr[2]=111;
cout<<"dynarr size:"<< dynarr.size()<<endl;
pr( dynarr );
dynarr.push_back(200);
pr( dynarr );

}




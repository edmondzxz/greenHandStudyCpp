#include<vector>
using namespace std;

vector<int> range(int min,int max){
	vector<int>va;
	for(int i=min;i<=max;i++){
		va.push_back(i);
	}
	return va;
}

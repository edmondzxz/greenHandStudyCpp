#include<iostream>
#include<string>
using namespace std;
int main(){
string sampleStr("daydayday");
string sampleStr2("123456");
// Find substring "day" in sampleStr, starting at position 0
size_t charPos = sampleStr.find ("day", 0);
size_t charPos2 = sampleStr2.find ("day", 0);
// Check if the substring was found, compare against string::npos
if (charPos != string::npos)
	cout<<"first not found"<<endl;
else
	cout<<"first found"<<endl;
if (charPos2 != string::npos)
	cout<<"second not found"<<endl;
else
	cout<<"second found"<<endl;
}

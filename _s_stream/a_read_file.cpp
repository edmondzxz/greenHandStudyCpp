#include<fstream>
#include<iostream>
#include<vector>
using namespace std;

string getFileData(string fileName){
	ifstream f;
	vector<string>strVec;
	string content;
	string output="";

	f.open( fileName , ios_base::in );
	if( f.is_open() ){
		while( !f.eof()){
			getline( f , content );
			strVec.push_back( content );
		}
		f.close();
	}

	for(int i=0;i<(strVec.size()-1);i++){
		if( i == (strVec.size() - 2 )){
			output = output + strVec[i];
		}
		else{
			output = output + strVec[i] + '\n';
		}
	}

	return output;
}

void example(){
	cout << getFileData( "example.md" ) << endl;
}

int main(){
	example();
	return 0;
}

#include <iostream>
#include<string>
using namespace std;

template <typename T1 , typename T2>
class Pair {
private:
	T1 v1;
	T2 v2;
public:
	Pair(T1 val1, T2 val2) :v1(val1), v2(val2) {}
	void print();
};

// specialization of Pair for types int   int here
template<> class Pair<int, int> {
private:
 	int v1;
 	int v2;
public:
  	Pair(int val1, int val2) : v1(val1), v2(val2) {}
 	void print() {
		cout<<v1<<"+"<<v2<<"="<< v1+v2<<endl;
     	}
};

template<> class Pair<string,string> {
private:
 	string v1;
 	string v2;
public:
  	Pair(string val1, string val2) : v1(val1), v2(val2) {}
 	void print() {
		cout<< v1<<v2<<endl;
     	}
};

int main() {
	Pair<int, int> i(222, 333);
	Pair<string, string> s("222", "333");
	i.print();
	s.print();
	return 0;
}

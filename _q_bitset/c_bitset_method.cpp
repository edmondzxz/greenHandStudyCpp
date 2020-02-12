#include <bitset>
#include <string>
#include <iostream>

int main ()
{
using namespace std;
bitset <8> inp("11101010");
cout << "bitset a:" << inp << endl;

cout << "size(): " << inp.size() << endl;
cout << "count():"<< inp.count() << endl;

inp.flip();
cout << "flip():" << inp << endl;

cout << "size(): " << inp.size() << endl;
cout << "count():"<< inp.count() << endl;


inp.set();
cout << "set():" << inp << endl;

inp.reset();
cout << "reset():" << inp << endl;
return 0;
}

#include <iostream>
using namespace std;

template <typename T>
class TestStatic
{
public:
     static int staticVal;
};

// static member initialization
template<typename T> int TestStatic<T>::staticVal;

int main()
{
TestStatic<int> intInstance;
TestStatic<int> intInstance2;
cout << "Setting staticVal for intInstance  to 100" << endl;
intInstance.staticVal = 100;
cout << "Setting staticVal for intInstance2 to 200" << endl;
intInstance.staticVal = 200;

TestStatic<double> dblnstance;
cout << "Setting staticVal for Double_2 to 300" << endl;
dblnstance.staticVal = 300;

cout << "intInstance.staticVal = " << intInstance.staticVal << endl;
cout << "intInstance2.staticVal = " << intInstance2.staticVal << endl;
cout << "dblnstance.staticVal = " << dblnstance.staticVal << endl;

return 0;

}

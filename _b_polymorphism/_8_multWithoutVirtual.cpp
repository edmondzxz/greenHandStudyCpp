// i promise i would never use mult inherit
#include <iostream>
using namespace std;

class Animal {
public:
Animal()
{
cout << "Animal constructor" << endl;
}
int age;
};

class Mammal:public   Animal
{
};

class Bird:public   Animal
{
};

class Reptile:public   Animal
{
};

class Platypus final:public Mammal, public Bird, public Reptile
{
public:
Platypus()
{
cout << "Platypus constructor" << endl;
}

};

int main()
{

Platypus duckBilledP;

// no compile error as there is only one Animal::age
duckBilledP.age = 25;


return 0;
}

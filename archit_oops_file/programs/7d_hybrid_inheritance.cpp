// C++ program for Hybrid Inheritance

#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// base class
class Fare {
public:
	Fare() { cout << "Fare of Vehicle\n"; }
};

// first sub class
class Car : public Vehicle {
};

// second sub class
class Bus : public Vehicle, public Fare {
};

// main function
int main()
{
    cout << "object 2" << endl;
	Bus obj2;
    cout << "object 1" << endl;
    Car obj1;
	return 0;
}

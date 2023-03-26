// wap to implement
// 1) virtual base class
// 2) constructor in derived class

#include <iostream>
using namespace std;

class A {
public:
	int a;
	A() // constructor
	{
		a = 10;
	}
};

// virtual base class B
class B : public virtual A {
};

// virtual base class C
class C : public virtual A {
};

class D : public B, public C {
    public:
        D(){
            a = 20;
        }
};

int main()
{
	D object; // object creation of class d
	cout << "a = " << object.a << endl;

	return 0;
}

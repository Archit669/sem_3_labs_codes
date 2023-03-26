#include <bits/stdc++.h>
using namespace std;

double volume(double side)
{
    return side * side * side;
}

double volume(double radius, double height)
{
    return 3.14 * radius * radius * height;
}

double volume(double length, double bredth, double height)
{
    return length * bredth * height;
}

int main()
{

    cout << "student details" << endl;
    cout << "name : archit jain" << endl;
    cout << "branch : btech cse b" << endl;
    cout << "rollno : 72-cseb-21" << endl;

    do
    {
        cout << "Main Menu!!!" << endl;
        cout << "1. volume of cube" << endl;
        cout << "2. volume of cuboid" << endl;
        cout << "3. volume of cylinder" << endl;
        cout << "4. exit" << endl;

        int choice;
        cout << "enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double side;
            cout << "enter side of cube: ";
            cin >> side;
            cout << "volume of cube is : " << volume(side) << endl;
            break;
        }

        case 2:
        {
            double length, bredth, height;
            cout << "enter length of cuboid: ";
            cin >> length;
            cout << "enter bredth of cuboid: ";
            cin >> bredth;
            cout << "enter height of cuboid: ";
            cin >> height;
            cout << "volume of cube is : " << volume(length, bredth, height) << endl;
            break;
        }

        case 3:
        {
            double radius, height;
            cout << "enter radius of cylinder: ";
            cin >> radius;
            cout << "enter height of cylinder: ";
            cin >> height;
            cout << "volume of the cylinder is : " << volume(radius, height) << endl;
            break;
        }

        case 4:
            cout << "exiting!!!" << endl;
            return 0;

        default:
            cout << "invalid input!!!" << endl;
        };

    } while (1);

    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int factorial(int n){
    if (n==0) return 1;
    return n*factorial(n-1);
}

int main() {
    
    cout << "Name : Archit jain " << endl;
    cout << "Roll No : 72-CSE-B-21" << endl;
    
    // take number from user
    int n;
    cout << "enter your number : " ;
    cin >> n;
    
    
    // print factorial of number
    cout << "factorial of " << n << " is " << factorial(n) << endl;
    

    return 0;
}

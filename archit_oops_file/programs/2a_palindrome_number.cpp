// check whether the number is palindrome or not

#include <iostream>
using namespace std;

int main() {
    cout << "Name : Archit jain " << endl;
    cout << "Roll No : 72-CSE-B-21" << endl;
    
    // take number from user
    int n;
    cout << "enter your number : " ;
    cin >> n;
    
    // take reverse number and store it in temp 
    int temp = n;
    int new_num  = 0;
    while(temp){
        new_num = new_num*10 + temp%10;
        temp = temp/10;
    }
    
    // check whether the no is palindrome or not
    if (new_num == n){
        cout << n << " is a palindrome" << endl;
    }else{
        cout << n << " is not a palindrome" << endl;
    }
    return 0;
}

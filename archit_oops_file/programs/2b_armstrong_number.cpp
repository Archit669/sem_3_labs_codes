// check whether the number is armstrong no or not

#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Name : Archit jain " << endl;
    cout << "Roll No : 72-CSE-B-21" << endl;
    
    // take number from user
    int n;
    cout << "enter your number : " ;
    cin >> n;
    
    // take sum of cube of digits and store it in temp 
    int temp = n;
    int new_num  = 0;
    while(temp){
        new_num+= (int)pow(temp%10,3);
        temp = temp/10;
    }
    
    // check whether the number is armstrong no or not
    if (new_num == n){
        cout << n << " is a armstrong number" << endl;
    }else{
        cout << n << " is not a armstrong number" << endl;
    }
    return 0;
}

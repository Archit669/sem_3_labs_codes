#include <iostream>
using namespace std;

int main() {
    // take size of array
    int n;
    cout << "enter size of array: ";
    cin >> n;
    
    // create array
    int* arr = new int[n];
    cout << "enter element of array below: \n";
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
    // take element 
    cout << "enter element: ";
    int element;
    cin >> element;
    
    // linear search in array
    bool flag = 1;
    for (int i = 0 ; i < n ; i++){
        if (arr[i] == element){
            cout << "element found at index " << i << endl;
            flag = 0;
            break;
        }
    }
    
    if (flag){
        cout << "element not found!!!" << endl;
    }
    
    return 0;
}

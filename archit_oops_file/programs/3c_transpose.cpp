#include <iostream>
using namespace std;

int main() {
    // personal details
    cout << "Archit Jain" << endl;
    cout << "class: BTech CseB" << endl;
    cout << "RollNo : 72-cseb-21" << endl;
    
   int transpose[10][10], i, j;
    int r,c;
    cout<<" Enter the number of rows and columns of  matrix: ";
    cin>>r>>c;
    int a[r][c];
    cout<<" Now enter the elements rowise in the matrix: ";
    for(int i = 0; i<r; i++ ){
        for(int j = 0 ; j< c ; j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
   
   cout<<"The matrix is:"<<endl;
   for(i=0; i<r; ++i) {
      for(j=0; j<c; ++j)
      cout<<a[i][j]<<" ";
      cout<<endl;
   }
   cout<<endl;
   for(i=0; i<r; ++i)
   for(j=0; j<c; ++j) {
      transpose[j][i] = a[i][j];
   }
   cout<<"The transpose of the matrix is:"<<endl;
   for(i=0; i<c; ++i) {
      for(j=0; j<r; ++j)
      cout<<transpose[i][j]<<" ";
      cout<<endl;
   }

    return 0;
}

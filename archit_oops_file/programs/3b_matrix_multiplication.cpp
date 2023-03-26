#include <iostream>
using namespace std;

int main() {
    // personal details
    cout << "Archit Jain" << endl;
    cout << "class: BTech CseB" << endl;
    cout << "RollNo : 72-cseb-21" << endl;
    
    //loop variable i to iterate rows and j to iterate columns.
    int row1, col1, row2, col2, i, j, k;
    cout << "\n\nEnter the number of Rows and Columns of first matrix : ";
    cin >> row1 >> col1;
    cout << "\n\nEnter the number of Rows and Columns of second matrix : ";
    cin >> row2 >> col2;
    
    //Declaring the 3 matrices (2D arrays) m1-first matrix, m2- second matrix and pro- stores the multiplication of the two matrices
    int m1[row1][col1], m2[row2][col2], pro[row1][col2];

    //Matrix multiplication property
    if (col1 == row2) {
        cout << "\nEnter the " << row1 * col1 << " elements of first matrix : \n";
        
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col1; j++) {
                cin >> m1[i][j];
            }
        }

        cout << "\nEnter the " << row2 * col2 << " elements of second matrix : \n";

        for (i = 0; i < row2; i++) {
            for (j = 0; j < col2; j++) {
                cin >> m2[i][j];
            }
        }

        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                pro[i][j] = 0;

                for (k = 0; k < col1; k++)
                    pro[i][j] = pro[i][j] + (m1[i][k] * m2[k][j]);
            }
        }

        cout << "\nThe first matrix is : \n";

        for (i = 0; i < row1; i++) {
            for (j = 0; j < col1; j++) {
                cout << m1[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "\nThe second matrix is : \n";

        for (i = 0; i < row2; i++) {
            for (j = 0; j < col2; j++) {
                cout << m2[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "\nThe Product matrix is : \n";

        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                cout << pro[i][j] << "  ";
            }
            cout << endl;
        }

    } else {
        cout << "\n\nMatrix multiplication can't be done as the indices do not match!";
    }

    cout << "\n\n";

    return 0;
}

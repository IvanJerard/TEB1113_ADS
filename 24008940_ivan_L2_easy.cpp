#include <iostream>
using namespace std;

int main() {
    int m1[2][2], m2[2][2], res[2][2] = {0};

    
    cout << "Enter elements of first 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "m1[" << i << "][" << j << "]: ";
            cin >> m1[i][j];
        }
    }// first matrix

    
    cout << "\nEnter elements of second 2x2 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "m2[" << i << "][" << j << "]: ";
            cin >> m2[i][j];
        }
    }//  second matrix

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }// multiply matrices

    
    cout << "\nResult of matrix multiplication:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << res[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

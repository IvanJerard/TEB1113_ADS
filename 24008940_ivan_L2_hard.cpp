#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    cout << "Enter size of matrix (e.g., 5): ";
    cin >> N;

    int mat[10][10];
    cout << "Enter the matrix values:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }

    int maxValue = INT_MIN;

    for (int a = 0; a < N - 1; a++) {
        for (int b = 0; b < N - 1; b++) {
            for (int d = a + 1; d < N; d++) {
                for (int e = b + 1; e < N; e++) {
                    int diff = mat[d][e] - mat[a][b];
                    if (diff > maxValue)
                        maxValue = diff;
                }
            }
        }
    }

    cout << "Maximum Value is " << maxValue << endl;
    return 0;
}

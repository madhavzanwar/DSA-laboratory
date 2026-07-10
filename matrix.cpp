#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int A[10][10], B[10][10], sum[10][10], sub[10][10];

    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> B[i][j];

    // Addition and Subtraction
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            sub[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "\nAddition of Matrices:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    cout << "\nSubtraction of Matrices:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << sub[i][j] << " ";
        cout << endl;
    }

    cout << "\nTranspose of Matrix A:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << A[j][i] << " ";
        cout << endl;
    }

    return 0;
}
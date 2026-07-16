#include <iostream>
using namespace std;

// Convert normal matrix to sparse matrix
int convert(int a[][100], int r, int c, int s[][3]) {
    int k = 1;
    s[0][0] = r;
    s[0][1] = c;

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] != 0) {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = a[i][j];
                k++;
            }

    s[0][2] = k - 1;
    return k;
}

// Transpose of sparse matrix
void transpose(int s[][3], int t[][3], int n) {
    t[0][0] = s[0][1];
    t[0][1] = s[0][0];
    t[0][2] = s[0][2];

    for (int i = 1; i < n; i++) {
        t[i][0] = s[i][1];
        t[i][1] = s[i][0];
        t[i][2] = s[i][2];
    }
}

// Addition of two sparse matrices
void add(int s1[][3], int s2[][3], int sum[][3], int n) {
    sum[0][0] = s1[0][0];
    sum[0][1] = s1[0][1];
    sum[0][2] = s1[0][2];

    for (int i = 1; i < n; i++) {
        sum[i][0] = s1[i][0];
        sum[i][1] = s1[i][1];
        sum[i][2] = s1[i][2] + s2[i][2];
    }
}

int main() {
    int r, c, a[100][100];
    int sparse[100][3], trans[100][3], sum[100][3];

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    int n = convert(a, r, c, sparse);

    transpose(sparse, trans, n);
    add(sparse, sparse, sum, n);

    cout << "\nSparse Matrix:\n";
    for (int i = 0; i < n; i++)
        cout << sparse[i][0] << " "
             << sparse[i][1] << " "
             << sparse[i][2] << endl;

    cout << "\nTranspose:\n";
    for (int i = 0; i < n; i++)
        cout << trans[i][0] << " "
             << trans[i][1] << " "
             << trans[i][2] << endl;

    cout << "\nAddition:\n";
    for (int i = 0; i < n; i++)
        cout << sum[i][0] << " "
             << sum[i][1] << " "
             << sum[i][2] << endl;

    return 0;
}
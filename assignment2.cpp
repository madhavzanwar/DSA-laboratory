#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    int arr[100][100];
    int sparse[100][3];

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int k = 0;


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = arr[i][j];

                cout << sparse[k][0] << "\n"
                     << sparse[k][1] << "\n"
                     << sparse[k][2] << endl;

                k++;
            }
        }
    }

    return 0;
}
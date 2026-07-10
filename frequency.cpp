#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    int element;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> element;

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    cout << "Frequency = " << count << endl;

    return 0;
}
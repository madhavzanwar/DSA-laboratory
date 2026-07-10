// For a given number of integers, select a data structure to rearrange it such that every second element becomes
// greater than its left and right elements. Assume no duplicate elements are present in the list of integers
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[100];
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    sort(arr, arr + n);

    
    for (int i = 1; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }

    cout << "Rearranged array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
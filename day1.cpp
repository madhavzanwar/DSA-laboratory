#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int main() {
//     int n;
//     cin >>n;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     sort(arr.begin(), arr.end());

//     cout <<"second largest element" <<arr[n - 2];

//     return 0;
// }

int main() {
    int n;
    cin >> n;

    int arr[100];   

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "Second largest element: " << arr[n - 2];

    return 0;
}
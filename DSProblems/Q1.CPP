#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    // Linear Search
    int pos = -1;  // -1 means not found
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;   // store position
            break;
        }
    }

    if(pos == -1)
        cout << "Element not found!";
    else
        cout << "Element found at position " << pos + 1;  // +1 for user-friendly index

    return 0;
}

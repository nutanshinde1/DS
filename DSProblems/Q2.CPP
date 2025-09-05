#include <iostream>
using namespace std;

int main() {
    int n, key, comparisons = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int pos = -1;  // position of element

    for(int i = 0; i < n; i++) {
        comparisons++;   // increase count for every check
        if(arr[i] == key) {
            pos = i;
            break;
        }
    }

    if(pos == -1)
        cout << "Element not found!\n";
    else
        cout << "Element found at position " << pos + 1 << "\n";

    cout << "Number of comparisons made: " << comparisons;

    return 0;
}

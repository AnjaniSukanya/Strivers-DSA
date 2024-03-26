#include <iostream>
#include <algorithm>
using namespace std;

void sortColors(int a[], int n) {
    int low = 0, mid = 0;
    int high = n - 1;
    while (mid <= high) {
        if (a[mid] == 0) {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1) {
            mid++;
        }
        else {
            swap(a[mid], a[high]);
            high--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array (0, 1, or 2): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sortColors(a, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

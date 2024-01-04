#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int secondSmallest(vector<int>&, int);
int secondLargest(vector<int>&, int);

int secondLargest(vector<int>& a, int n) {
    int largest = a[0];
    int slargest = INT_MIN;
    
    for(int i = 1; i < n; i++) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        } else if(a[i] > slargest && a[i] < largest) {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int>& a, int n) {
    int smallest = a[0];
    int ssmallest = INT_MAX;
    
    for(int i = 1; i < n; i++) {
        if(a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if(a[i] != smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int res = secondLargest(v, n);
    int res2 = secondSmallest(v, n);
    
    cout << res << " " << res2 << endl;
    return 0;
}

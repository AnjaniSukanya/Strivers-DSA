#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int cnt = 0;
    int ele = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (cnt == 0) {
            cnt = 1;
            ele = nums[i];
        } else if (nums[i] == ele) {
            cnt++;
        } else {
            cnt--;
        }
    }
    return ele;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = majorityElement(a);
    cout << "Major ele is " << ans;
    return 0;
}

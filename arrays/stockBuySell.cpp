#include<iostream>
#include <vector>

using namespace std;
int main()
{
    int n ;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int mini = a[0], profit = 0;
    for(int i=0;i<n;i++)
    {
        int cost = a[i] - mini;
        profit = max(profit,cost);
        mini = min(mini,a[i]);
    }
    cout << profit ;
        

    
}
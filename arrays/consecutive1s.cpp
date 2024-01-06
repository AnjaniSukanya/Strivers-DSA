#include<iostream>
using namespace std;
findConsecutive(int a[], int n)
{
    int count = 0;
    int maxi = 0;
    for(int i=0;i<n;i++)
    {
        if (a[i] == 1)
        {
            count++;
        }
        else{
            count = 0;
        }
        maxi = max(maxi , count);
    }
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int res = findConsecutive(a,n);
    cout << res ;
}
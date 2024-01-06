#include<iostream>
using namespace std;
int AppearOnlyOne(int a[], int n)
{
    int x = 0;
    for(int i=0;i<n;i++)
    {
        x = x ^ a[i];
    }
    return x;
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
    int res = AppearOnlyOne(a,n);
    cout << res;
}
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void leftRotated(int[] ,int,int);
void leftRotated(int a[] , int n,int d)
{
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
    
}
int main()
{
    int n,d;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> d;
    leftRotated(a,n,d);
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }

}

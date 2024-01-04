#include<iostream>
#include<vector>
using namespace std;
vector<int> leftRotated(vector<int>& ,int);
vector<int> leftRotated(vector<int>& a , int n )
{
    int temp = a[0];
    for(int i=0;i<n;i++)
    {
        a[i-1] = a[i];
    }
    a[n-1] = temp;
    return a;

}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector<int> res =  leftRotated(a,n);
    for(int i=0;i<n;i++)
    {
        cout << res[i] << " ";
    }

}

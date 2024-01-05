#include<iostream>
#include<vector>
using namespace std;
vector<int> leftRotated(vector<int>& ,int);
vector<int> leftRotated(vector<int>& a , int n )
{
    int j = -1;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 0)
        {
            j = i;
            break;
        }

    }
    for(int i = j+1 ; i<n;i++)
    {
        if(a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
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

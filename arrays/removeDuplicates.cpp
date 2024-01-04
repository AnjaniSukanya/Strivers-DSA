#include<iostream>
#include<vector>
using namespace std;
int RemoveDuplicate(vector<int>& ,int);
int RemoveDuplicate(vector<int>& a , int n )
{
    int i = 0;
    for(int j=1;j<n;j++)
    {
        if(a[j] != a[i])
        {
            a[i+1] = a[j];
            i++;
        }
        
    }
    return i + 1;
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
    int res = RemoveDuplicate(a,n);
    cout << "Number of unique elements : " << res;

}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int largest = a[0];
    for(int i=0;i<n;i++)
    {
        if ( a[i] > largest)
        {
            largest = a[i];
        }
    } 
    cout << "Largest : " << largest ;
}
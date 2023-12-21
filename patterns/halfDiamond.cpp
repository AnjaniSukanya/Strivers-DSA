#include<iostream>
using namespace std;
void print2(int);

void print2(int n)
{
    for(int i=1;i<= 2*n-1;i++)
    {
        int stars = i;
        if(i>n) stars = 2*n - i;
            for(int j=1;j<= stars;j++)
            {
                cout << "*";
            }
            cout << endl;
    }
}
int main()
{
    int n ;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin >> t;
        print2(t);
    }
  
    return 0;
}
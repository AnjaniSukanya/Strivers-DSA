
#include<iostream>
#include<cmath>
using namespace std;
void solve1(int);

void solve1(int n)
{
    for(int i = 1;i<=sqrt(n);i++)
    {
        if(n%i == 0) {
            cout << i << " ";
        }
        if(n/i != i) {
            cout << n/i << " ";
        }
        
    }
}
int main()
{
    int n ;
    cin >> n;
    solve1(n);
}

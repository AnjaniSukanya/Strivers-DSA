#include<iostream>
using namespace std;
void fn(int,int);
void fn(int i , int n)
{
    if(i<1) 
    {
        return;
    }
    cout << i << endl;
    fn(i-1,n);
    // if we write print here: 1 to n get printed using backtracking
}


int main()
{
    int n;
    cin >> n;
    fn(n,n);
}
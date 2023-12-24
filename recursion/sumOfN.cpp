#include<iostream>
using namespace std;
void fn(int,int);
void fn(int i , int sum)
{
    if(i<1) 
    {
        cout << sum ;
        return;
    }
   
    fn(i-1,sum + i);
}


int main()
{
    int n;
    cin >> n;
    fn(n,0);
}

/* Functional recursion: 
 f(n)
 {
    if n== 0
    { 
        return ;
    }
    return n + f(n-1);
 }*/
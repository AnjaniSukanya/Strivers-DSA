#include<iostream>
using namespace std;
void fn(int,int);
void fn(int i , int n)
{
    if(i>n) 
    {
        return;
    }
    cout << "Sukanya" << endl;
    fn(i+1,n);
}


int main()
{
    int n;
    cin >> n;
    fn(1,n);
}
#include <iostream>

using namespace std;
int reverse(int X) {
   int Y = 0;
   while (X > 0) {
    
      int digit = X % 10;
   
      Y = Y * 10 + digit;
  
      X = X / 10;
   }
   return Y;
}
int main() {
   int x;
   cout << "Enter number : ";
   cin >> x;

   int Y = reverse(x);
   if (x == Y) {
      cout << "Palindrome" << endl;
   } else {
      cout << "Not Palindrome" << endl;
   }
   return 0;
}
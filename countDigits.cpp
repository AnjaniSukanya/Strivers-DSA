#include <iostream>
using namespace std;

int countDigits(int number) {
    int count = 0;
    number = abs(number);
    while (number != 0) {
        number /= 10;
        count++;
    }

    return count;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int digits = countDigits(num);

    cout << "Number of digits in " << num << " is: " << digits << endl;

    return 0;
}

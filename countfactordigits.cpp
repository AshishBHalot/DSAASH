#include <iostream>

using namespace std;

int countDigits(int n) {
    int count = 0;
    int number = n;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && number % digit == 0) {
            count++;
        }
        n = n / 10;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
   cout << "Number of digits that are factors of " << num << ": " << countDigits(num) << endl;
    return 0;
}
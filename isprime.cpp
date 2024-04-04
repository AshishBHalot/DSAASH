#include <iostream>

using namespace std;

bool isPrime(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if ((n / i) != i) {
                count++;
            }
        }
    }
    return count == 2; // A prime number has exactly 2 factors
}


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a prime number.";
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";

    return 0;
}

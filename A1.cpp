//Question => Fibonacci Series Using Recursion
//  The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such
//  that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
//  F(0) = 0, F(1) = 1
//  F(n) = F(n- 1) + F(n- 2), for n > 1.
//  Given n, calculate F(n)

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci number F(" << n << ") is " << fibonacci(n) << endl;
    return 0;
}
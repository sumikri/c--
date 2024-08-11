/*Here's a simple C++ program to check whether a given number is a prime number or not:*/




#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) 
        return false;
    if (n <= 3) 
        return true;
    if (n % 2 == 0 || n % 3 == 0) 
        return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}




#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    for (int i = 3; i <= n; ++i) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    cout << endl;
}

int main() {
    int num;

    // Prompt the user to enter the number of terms
    cout << "Enter the number of terms: ";
    cin >> num;

    // Call function to print Fibonacci series
    if(num >= 1)
        printFibonacci(num);
    else
        cout << "Please enter a positive integer." << endl;

    return 0;
}

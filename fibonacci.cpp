#include <iostream>
using namespace std;
// Program untuk menunjukkan deret Fibonacci dan menghitung jumlahnya

int main()
{
    cout << "Iteration & Selection Program: FIBONACCI SERIES" << endl;
    cout << "--------------------------------------------------" << endl;
    long long n;
    cout << "Enter a positive integer: "; // Input n for Fibonacci series
    cin >> n;

    long long f1 = 1, f2 = 1, nextTerm = 0;
    long long sum = 0;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << f1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << f2 << ", ";
            continue;
        }
        nextTerm = f1 + f2;
        f1 = f2;
        f2 = nextTerm;
        cout << nextTerm << ", ";
    }

    cout << "\nSum of Fibonacci Series: ";
    f1 = 1, f2 = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            sum += f1;
            continue;
        }
        if (i == 2)
        {
            sum += f2;
            continue;
        }
        nextTerm = f1 + f2;
        f1 = f2;
        f2 = nextTerm;

        sum += nextTerm;
    }
    cout << sum << endl; // Show the sum of the series
    return 0;
}

// Muhammad Affriza Ayman Nashmi
// 25/559828/TK/63201
// Teknologi Informasi - B
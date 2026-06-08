#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int reverseNumber2(int n)
{
    // Single digit numbers remain the same
    if (n >= 0 && n <= 9)
    {
        return n;
    }

    int reversed = 0;

    while (n != 0)
    {
        int digit = n % 10;

        // Overflow check
        if (reversed > (INT_MAX - digit) / 10 ||
            reversed < (INT_MIN - digit) / 10)
        {
            return 0;
        }

        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return reversed;
}

void reverseNumber1(int num)
{
    // This logic cannot handle:
    // 1. Integer overflow
    // 2. Negative number edge cases

    int reversed = 0;

    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    cout << reversed << endl;
}

int main()
{
    int num = 54321;

    cout << "Using basic reverse function: ";
    reverseNumber1(num);

    cout << "Using overflow-safe reverse function: ";
    cout << reverseNumber2(num) << endl;

    return 0;
}
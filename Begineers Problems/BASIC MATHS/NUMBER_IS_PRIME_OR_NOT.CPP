#include <iostream>
#include <vector>
using namespace std;
bool isPrime1(int n) {
        if (n <= 1) {
            return false;
        }

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }

    bool isPrime2(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;

        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }

    bool isPrime3(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;

        if (n % 2 == 0 || n % 3 == 0) {
            return false;
        }

        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }

        return true;
    }
int main() {
    int num;
    cout << "enter a number to check prime: " << endl;
    cin >> num;

    bool fool1 = isPrime1(num);
    cout << "this answer is from Prime1: " << fool1 << endl;

    bool fool2 = isPrime2(num);
    cout << "this answer is from Prime2: " << fool2 << endl;
    
    bool fool3 = isPrime3(num);
    cout << "this answer is from Prime3: " << fool3 << endl;

    return 0;
}
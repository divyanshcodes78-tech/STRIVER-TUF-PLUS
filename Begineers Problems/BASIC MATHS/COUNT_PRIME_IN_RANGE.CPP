#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void primeUptoN2(int n)
{
    //Created an array of size (n + 1).
    vector<int> primeArr(n + 1, 1);

    // We dont need index "0" and "1" so already set them "0".
    primeArr[0] = primeArr[1] = 0;

    // Set all the numbers from 2 till "n" as prime("1").
    for (int i = 2; i <= n; i++)
    {
        primeArr[i] = 1;
    }

    /* Here we go to every prime number, go to it's multiple and make it 
    composite. */ 
    for (int i = 2; i * i <= n; i++)
    {
        if(primeArr[i] == 1)
        {
            for(int j = i * i; j <= n; j += i)
            {
                primeArr[j] = 0;
            }
        }
    }

    int totalPrime = count(primeArr.begin(), primeArr.end(), 1);

    cout << "total prime numbers in the range are : " << totalPrime << endl;
}

bool isPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }

    return true;
}
void primeUptoN1(int n)
{
    /* This is the standard and the brute force soln of the questio.
    And this takes about O(n * root(n)) solution.*/
    int primeCounter = 0;

    for (int i = 2; i <= n; i++)
    {
        bool fool = isPrime(i);
        if(fool == true)
        primeCounter++;
    }

    cout << "total no of prime upto n  are : " << primeCounter << endl;
}

void primeUptoN3(int n)
{
   int primeCounter = 0;

   for(int i = 2; i <= n; i++)
   {
        bool fool = true;

        for(int j = 2; (j * j) <= i; j++)
        {
            if(i % j == 0)
            {
                fool = false;
                break;
            }
        }

        if(fool == true) primeCounter++;
   }

   cout << "the total no of primes between [1,n] are : " << primeCounter << endl;
}
int main() 
{
    int n = 1000;
    primeUptoN3(n);
    return 0;
}
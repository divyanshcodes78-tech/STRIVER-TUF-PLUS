#include <iostream>
#include <vector>
using namespace std;
int pascalTriangleI(int r, int c) 
    {
        int n = r - 1;
        r = c - 1;

        if(r == 1) return n;

        r = min(r, n-r);

        int resultant = 1;

        for(int i = 0; i < r; i++)
        {
            resultant = resultant * (n - i);
            resultant = resultant / (i + 1);
        }

        return resultant;

    }
int main() 
{
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
vector<int> pascalTriangleII2(int r)
    {
        if(r == 1) return {1};

        vector<int> result;

        long long answer = 1;

        result.push_back(1);

        for(int i = 1; i < r; i++)
        {
            answer = answer * (r - i);
            answer = answer / i;
            result.push_back(answer);
        }

        return result;
    }
int nCr(int n, int r)
    {
        r = min(r, n - r);

        long long res = 1;

        for(int i = 0; i < r; i++)
        {
            res = res * (n - i);
            res = res / (i + 1);
        }

        return res;
    }

vector<int> pascalTriangleII(int r)
    {
        // Most brute force solution.
        vector<int> ans;

        int n = r - 1;

        for(int c = 0; c < r; c++)
        {
            ans.push_back(nCr(n, c));
        }

        return ans;
    }
int main() 
{
    return 0;
}
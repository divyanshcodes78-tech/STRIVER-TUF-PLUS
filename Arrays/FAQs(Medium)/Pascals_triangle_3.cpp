#include <iostream>
#include <vector>
using namespace std;
vector<int> generateRows(int r)
    {
        vector<int> res;

        long long ans = 1;

        res.push_back(1);

        for(int i = 1; i < r; i++)
        {
            ans = ans * (r - i);
            ans = ans / i;
            res.push_back(ans);
        }

        return res;
    }

vector<vector<int>> pascalTriangleIII(int numRows) 
    {
        vector<vector<int>> result;
        
        for(int row = 1; row <= numRows; row++)
        {
            result.push_back(generateRows(row));
        }

        return result;
    }
int main() 
{
    return 0;
}
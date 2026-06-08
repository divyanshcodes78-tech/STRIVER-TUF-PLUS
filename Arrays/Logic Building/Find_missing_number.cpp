#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int>& nums) 
    {
        int size = nums.size();
        int sum = 0;

        for(int i = 0; i <= size; i++)
        {
            sum = sum + i;
        }

        int numsSum = 0;
        for(int i = 0; i < size; i++)
        {
            numsSum = numsSum + nums[i];
        }

        return sum - numsSum;
    }
int main() 
{
    return 0;
}
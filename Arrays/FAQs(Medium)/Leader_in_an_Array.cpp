#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void leaders2(vector<int>& nums) 
{
    // Brute Force Approach:
    
    vector<int> result;

    int largestEle = nums.back();
    result.push_back(largestEle);

    for(int i = nums.size() - 2; i >= 0; i--)
    {
        if(nums[i] > largestEle)
        {
            largestEle = nums[i];
            result.push_back(largestEle);
        }
    }

    reverse(result.begin(), result.end());

for(int x : result)
{
    cout << x << " ";
}
}

vector<int> leaders1(vector<int>& nums) 
{
    // Brute Force Approach:

    vector<int> result;

    for(int i = 0; i < nums.size(); i++)
    {
        bool isLeader = true;

        for(int j = (i + 1); j < nums.size(); j++)
        {
            if(nums[j] >= nums[i])
            {
                isLeader = false;
                break;
            }
        }

        if(isLeader)
        {
            result.push_back(nums[i]);
        }
    }
}
int main() 
{vector<int> nums = {1, 2, 5, 3, 1, 2};
    leaders2(nums);
    return 0;
}
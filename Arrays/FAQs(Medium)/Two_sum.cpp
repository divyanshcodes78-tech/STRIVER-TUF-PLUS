#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) 
    {
        // Better Solution.
        unordered_map<int, int> mpp; 

        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            int moreNeeded = target - nums[i];

            if(mpp.find(moreNeeded) != mpp.end())
            {
                return {mpp[moreNeeded], i};
            }

            mpp[nums[i]] = i;
        }

        return {-1, -1};
    }
int main() 
{
    vector<int> n = {0,-1, 2, -3, 1};
    sort(n.begin(), n.end());
for(int i = 0; i < n.size(); i++)
{
    cout << n [i] << " ";
}
    return 0;
}
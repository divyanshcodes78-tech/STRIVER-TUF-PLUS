#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<vector<int>> fourSumI(vector<int>& nums, int target) 
    {
        set<vector<int>> ans;

        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            for(int j = (i + 1); j < n ; j++)
            {
                set<long long> hashset; 

                for(int k = (j + 1); k < n; k++)
                {
                    long long sum = nums[i] + nums[j] + nums[k];

                    long long fourth = target - sum;

                    if(hashset.find(fourth) != hashset.end())
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], static_cast<int>(fourth)};
                        sort(temp.begin(), temp.end());
                        ans.insert(temp);
                    }

                    hashset.insert(nums[k]);
                }
            }
        }

        vector<vector<int>> res(ans.begin(), ans.end());
        return res;
    }
int main() 
{
    return 0;
}
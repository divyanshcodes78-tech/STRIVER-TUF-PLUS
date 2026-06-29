#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum3(vector<int>& nums) 
    {
       // Vector to store the triplets that sum up to target
        vector<vector<int>> ans;
        
        int n = nums.size();
        
        // Sort the input array nums
        sort(nums.begin(), nums.end());
        
        // Iterate through the array to find triplets
        for (int i = 0; i < n; i++) {
            // Skip duplicates
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            // Two pointers approach
            int j = i + 1;
            int k = n - 1;
            
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    // Found a triplet that sums up to target
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    
                    // Skip duplicates
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }
        
        return ans;
    }

vector<vector<int>> threeSum2(vector<int>& nums) 
    {
        // Betetr solution.
        set<vector<int>> tripletSet;

        int n = nums.size();

        for(int i = 0; i < (n - 2); i++)
        {
            set<int> hashset;

            for(int j = (i + 1); j < (n); j++)
            {
                int required = (-1)*(nums[i] + nums[j]);

                if(hashset.find(required) != hashset.end())
                {
                vector<int> temp = {nums[i], nums[j], required};
                sort(temp.begin(), temp.end());
                tripletSet.insert(temp);
                }

                hashset.insert(nums[j]);
            }
        }

        vector<vector<int>> ans(tripletSet.begin(), tripletSet.end());

        return ans;
    }

vector<vector<int>> threeSum1(vector<int>& nums) 
    {
        int n = nums.size();
        vector<vector<int>> result;
        for(int i = 0; i < (n - 2); i++)
        {
            for(int j = (i + 1); j < (n - 1); j++)
            {
                for(int k = (j + 1); k < n; k++)
                {
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
                        result.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }

        for(int i = 0; i < result.size(); i++)
        {
            for(int j = 0; j < result[0].size(); j++)
            {
                cout << result[i][j] << " ";
            }

            cout << endl;
        }
    }

int main() 
{
    vector<int> n = {2, -2, 0, 3, -3, 5};
    threeSum1(n);
    return 0;
}
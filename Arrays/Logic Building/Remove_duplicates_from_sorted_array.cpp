#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int removeDuplicates2(vector<int>& nums) {
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if(nums[i] != nums[j])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }
    return (i + 1);
    }

int removeDuplicates1(vector<int>& nums) 
    {
        set<int> unique;

        for(int i = 0; i < nums.size(); i++)
        {
            unique.insert(nums[i]);
        }

        nums.clear();

        for(auto it = unique.begin(); it != unique.end(); it++)
        {
            int number = *it;
            nums.push_back(number);
        }

        int k = unique.size();

        return k;
    }
int main() 
{
    
    return 0;
}
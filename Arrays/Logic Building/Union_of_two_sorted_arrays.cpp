#include <iostream>
#include <vector>
#include <set>
#include <climits>

using namespace std;
vector<int> unionArray(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> result;

    int i = 0;
    int j = 0;

    while(i < nums1.size() && j < nums2.size())
    {
        if(nums1[i] <= nums2[j])
        {
            if(result.empty() || result.back() != nums1[i])
                result.push_back(nums1[i]);

            i++;
        }
        else
        {
            if(result.empty() || result.back() != nums2[j])
                result.push_back(nums2[j]);

            j++;
        }
    }

    while(i < nums1.size())
    {
        if(result.empty() || result.back() != nums1[i])
            result.push_back(nums1[i]);

        i++;
    }

    while(j < nums2.size())
    {
        if(result.empty() || result.back() != nums2[j])
            result.push_back(nums2[j]);

        j++;
    }

    return result;
}
vector<int> unionArray1(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int> unioun;

        for(int i = 0; i < nums1.size(); i++)
        {
            unioun.insert(nums1[i]);
        }

        for(int i = 0; i < nums2.size(); i++)
        {
            unioun.insert(nums2[i]);
        }

        nums1.clear();

        for(auto it = unioun.begin(); it != unioun.end(); it++)
        {
            nums1.push_back(*it);
        }

        return nums1;
        
    }
int main() 
{
    return 0;
}
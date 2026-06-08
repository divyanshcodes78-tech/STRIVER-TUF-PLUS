#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int> result;

        int i = 0;
        int j = 0;

        while(i < nums1.size() && j < nums2.size())
        {
            if(nums1[i] < nums2[j])
            {
                result.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j])
            {
                result.push_back(nums2[j]);
                j++;
            }
            else if(nums1[i] == nums2[j])
            {
                result.push_back(nums1[i]);
                result.push_back(nums2[j]);
                i++;
                j++;
            }
        }

        if(i == nums1.size())
        {
            while(j < nums2.size())
            {
                result.push_back(nums2[j]);
                j++;
            }
        }
        else
        {
            while(i < nums1.size())
            {
                result.push_back(nums1[i]);
                i++;
            }
        }

        nums1.clear();
        nums1 = result;

        for(int x : nums1)
        {
            cout << x << " ";
        }
    }
int main() 
{
    vector<int> n1 = {1,3,5,0,0,0};
    vector<int> n2 = {2,4,6};
    int m = n1.size();
    int n = n2.size();
    
    merge(n1, m, n2, n);
    return 0;
}
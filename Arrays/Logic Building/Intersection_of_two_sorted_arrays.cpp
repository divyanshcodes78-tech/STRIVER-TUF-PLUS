#include <iostream>
#include <vector>
using namespace std;
vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) 
{
    vector<int> result;

    int size1 = nums1.size();
    int size2 = nums2.size();

    int i = 0;
    int j = 0;

    while(i < size1 && j < size2)
    {
        if(nums1[i] == nums2[j])
        {
            result.push_back(nums1[i]);
            i++;
            j++;
        }
        else if(nums1[i] > nums2[j])
        {
            j++;
        }
        else if(nums1[i] < nums2[j])
        {
            i++;
        }
    }

    for(int x : result)
    {
        cout << x << " ";
    }
}
int main() 
{
    vector<int> n1 = {1, 2, 2, 3, 3, 3};
    vector<int> n2 = {2, 3, 3, 4, 5, 7};
    intersectionArray(n1, n2);
    return 0;
}
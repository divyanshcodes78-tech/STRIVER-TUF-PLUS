#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// This is the best CP/interview soln.
void rotateArray(vector<int>& nums, int k) 
{
        int n = nums.size();

        k %= n;
        if (k == 0) return;

        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end());
    }

    //This is standard soln.
    void rotateArray1(vector<int>& nums, int k) 
    {
        // We took the size of the array.
        int size = nums.size();

        // Calculated the total rotations needed/
        int tRotation = size % k;

        
        if(tRotation == 0) return;

        for(int i = 1; i <= tRotation; i++)
        {
            int fElement = nums[0];

            for(int j = 1; j < size; j++)
            {
                nums[j - 1] = nums[j];
            }

            nums.back() = fElement;
        }

        for(int i = 0; i < size; i++)
        {
            cout << nums[i] << " ";
        }
    }
int main() 
{
vector<int> n = {1,2,3,4,5,6};
int k = 2;
rotateArray1(n, k);
    return 0;
}
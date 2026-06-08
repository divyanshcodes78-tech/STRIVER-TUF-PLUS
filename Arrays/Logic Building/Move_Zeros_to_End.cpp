#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void moveZeroes2(vector<int>& nums) 
{
    int arrSize = nums.size();

        if (arrSize == 1) return;

        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }

        return;
    
}

void moveZeroes1(vector<int>& nums) 
{
    int arrSize = nums.size();

        if(arrSize == 1) return;

        int left = 0;
        int right = 1;

        while(right < arrSize)
        {
            if(nums[left] != 0 && nums[right] == 0)
            {
                left++;
                right++;
            }
            else if(nums[left] == 0 && nums[right] != 0)
            {
                swap(nums[left], nums[right]);
                left++;
                right++;
            }
            else if(nums[left] == 0 && nums[right] == 0)
            {
                right++;
            }
            else if(nums[left] != 0 && nums[right] != 0)
            {
                left++;
                right++;
            }
        }

 for(int i = 0; i < arrSize; i++)
 {
    cout << nums[i] << " ";
 }
}

int main() 
{
    vector<int> n = {0, 20, 0, -20, 0, 20};
    moveZeroes1(n);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
void rotateArrayByOne(vector<int>& nums) 
    {
        int element = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            nums[i - 1] = nums[i];
        }

        nums[nums.size() - 1] = element;

        return;
    }
int main() 
{
    return 0;
}
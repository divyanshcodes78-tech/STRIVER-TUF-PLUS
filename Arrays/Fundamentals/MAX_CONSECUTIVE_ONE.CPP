#include <iostream>
#include <vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) 
{
    int maxLeng = 0;
    int size = 0;
    
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 1)
        {
            size++;
        }
        else
        {
            maxLeng = max(maxLeng, size);
            size = 0;
        }
    }

    return max(maxLeng, size);
}
int main() 
{
    cout << "Hello, World!" << endl;
    return 0;
}
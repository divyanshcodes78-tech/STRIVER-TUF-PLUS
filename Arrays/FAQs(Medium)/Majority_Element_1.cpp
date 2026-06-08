#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();

        int majorityEle;
        int counter = 0;

        for(int i : nums)
        {
            if(counter == 0)
            {
                majorityEle = i;
                counter = 1;
            }
            else if(i == majorityEle)
            {
                counter++;
            }
            else if(i != majorityEle)
            {
                counter--;
            }
        }
    }
int main() 
{
    return 0;
}
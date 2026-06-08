#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;

int sumHighestAndLowestFrequency3(vector<int>& nums) 
    {
        unordered_map<int,int> freq;
        for(int ele : nums)
        {
            freq[ele]++;
        }

        int maxFreq = 0;
        int minFreq = INT_MAX;

        for(auto it : freq)
        {
            int frequency = it.second;

            maxFreq = max(maxFreq, frequency);
            minFreq = min(minFreq, frequency);
        }

        return (maxFreq + minFreq);
    }


int sumHighestAndLowestFrequency2(vector<int>& nums) 
    {
        int hashSize = *max_element(nums.begin(), nums.end());
        vector<int> freq(hashSize + 1, 0);

        for(int ele : nums)
        {
            freq[ele]++;
        }

        int maxFreq = 0;
        int minFreq = INT_MAX;

        for(int ele : freq)
        {
            if(ele > 0)
            {
            maxFreq = max(maxFreq, ele);
            minFreq = min(minFreq, ele);
            }
        }

        return (maxFreq + minFreq);
    }


int sumHighestAndLowestFrequency1(vector<int>& nums) 
    {
        /* This is my version of the code. */
        int hashSize = *max_element(nums.begin(), nums.end());
        hashSize++;

        vector<int> hashTable(hashSize, 0);

        for (int i = 0; i < nums.size(); i++) {
            hashTable[nums[i]]++;
        }

        int ele1 = *max_element(hashTable.begin(), hashTable.end());

        int ele2 = INT_MAX;
        for(int i = 0; i < hashSize; i++)
        {
            if(hashTable[i] < ele2 && hashTable[i] != 0)
            {
                ele2 = hashTable[i];
            }
        }

        return (ele1 + ele2);
    }
int main() 
{
    return 0;
}
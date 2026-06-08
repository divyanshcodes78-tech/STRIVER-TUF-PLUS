#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int mostFrequentElement2(vector<int>& nums) {
    unordered_map<int, int> freq;

    int ans = nums[0];
    int maxFreq = 0;

    for (int x : nums) {
        freq[x]++;

        if (freq[x] > maxFreq) {
            maxFreq = freq[x];
            ans = x;
        }
    }

    return ans;
}


int mostFrequentElement1(vector<int>& nums) {

        if(nums.size() == 1) return nums[0];
        int hashSize = *max_element(nums.begin(), nums.end());
        hashSize++;

        vector<int> hashTable(hashSize, 0);

        for (int i = 0; i < nums.size(); i++) {
            hashTable[nums[i]]++;
        }

        int idx = max_element(hashTable.begin(), hashTable.end()) - hashTable.begin();

        return idx;
    }

    int mostFrequentElement(vector<int>& nums) 
    { 
        // This is the most brute force approach.
        int visited[10001] = {0};

        int maxCount = 0;
        int element = -1;

        for(int i = 0; i < nums.size(); i++)
        {
            int count = 0;

            for(int j = 0; j < nums.size(); i++)
            {
                if(nums[i] == nums[j])
                {
                    count++;
                }
            }

            if(count > maxCount)
            {
                maxCount = count;
                element = nums[i];
            }
            else if((count == maxCount) && nums[i] < element)
            {
                element = nums[i];
            }
        }

        return element;
    }

    
int main() 
{
    return 0;
}
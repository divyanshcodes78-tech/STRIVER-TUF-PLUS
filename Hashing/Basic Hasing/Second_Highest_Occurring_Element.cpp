#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;

int secondMostFrequentElement(vector<int>& nums) 
    {
        unordered_map<int, int> freq;

        int maxFreq = 0;
        int smaxFreq = -1;
        int smaxEle = -1;

        for(int x : nums)
        {
            freq[x]++;

            if(freq[x] > maxFreq)
            {
                maxFreq = freq[x];
                smaxFreq = maxFreq;
                smaxEle = x;
            }
        }

        return smaxEle;
    }
int main() 
{
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void chaining(vector<int> nums)
{
    vector<vector<int>> hashTable(10);

    for(int x : nums)
    {
        int index = x % 10;
        hashTable[index].push_back(x);
    }

    for(int i = 0; i < hashTable.size(); i++)
    {
        cout << "Index " << i << ":";
        for(auto it = hashTable[i].begin(); it != hashTable[i].end(); it++)
        {
            cout << (*it) << " ";
        }

        cout << endl;
    }
}
void characterHasing(string ch)
{
    vector<int> hash(123, 0);

    
    for(int i = 0; i < ch.size(); i++)
    {
        hash[ch[i]]++;
    }

    for(int i = 0; i < hash.size(); i++)
    {
        cout << hash[i] << " ";
    }
}

void characterHasing1(string ch)
{
    //Assumin that the strin has characters only from 'a - z'.
    vector<int> hash(26, 0);

    for(int i = 0; i < ch.size(); i++)
    {
        hash[ch[i] - 97]++;
    }

    for(int i = 0; i < 27; i++)
    {
        cout << hash[i] << " ";
    }

    
}

void numericHashing(vector<int> nums)
{
int maxEle = *max_element(nums.begin(), nums.end());

vector<int> hashMap(maxEle + 1, 0);

for (int i = 0; i < nums.size(); i++) {
    hashMap[nums[i]]++;
}

for (int i = 0; i < hashMap.size(); i++) {
    cout << hashMap[i] << " ";
}

}
int main() 
{
    vector<int> nums = {4,4,5,4,6,7,5,4,1,6,7,5};
    string str = "absjdfo";
    vector<int> n = {21, 25, 36, 52, 28, 14, 22, 21};
    // chaining(n);
    // characterHasing1(str);

int i = max_element(n.begin(), n.end()) - n.begin();
cout << i << endl;
    // map<int, int> m;
    // cout << endl;
    // cout << m[10] << endl;
    // m[10]++;
    // cout << m[10] << endl;

    return 0;
}
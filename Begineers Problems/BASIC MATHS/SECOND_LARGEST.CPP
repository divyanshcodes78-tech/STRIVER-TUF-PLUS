#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int secondLargestElement(vector<int>& nums) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int x : nums) {
            if (x > largest) {
                secondLargest = largest;
                largest = x;
            }
            else if (x < largest && x > secondLargest) {
                secondLargest = x;
            }
        }

        return secondLargest == INT_MIN ? -1 : secondLargest;
    }
int main() 
{
    vector<int> nums = {4, 8, 2, 7, 5};
    return 0;
}
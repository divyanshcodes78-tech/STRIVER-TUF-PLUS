#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void rotateMatrix(vector<vector<int>>& matrix) 
{
        int numRow = matrix.size();
        int numCol = matrix[0].size();

    for(int row = 0; row < numRow; row++)
    {
        for(int col = 0; col < numCol; col++)
        {
            if(row == col) continue;
            else
            {
                swap(matrix[row][col], matrix[col][row]);
            }
            
        }
    }

    
        for(int row = 0; row < numRow; row++)
        {
            reverse(matrix[row].begin(), matrix[row].end());
        }

        

    for(int row = 0; row < numRow; row++)
    {
        for(int col = 0; col < numCol; col++)
        {
            cout << matrix[row][col] << " ";
            
        }

        cout << endl;
    }
}
int main() 
{
    vector<vector<int>> n = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    rotateMatrix(n);
    return 0;
}
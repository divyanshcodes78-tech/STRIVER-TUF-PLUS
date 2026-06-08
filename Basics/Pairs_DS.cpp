#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Syntas -> pair<data_type1, data_type1> pair_name;
// It stores two values usually named as "first" & "second".
// If error comes you can use "#include <utility>" header file.
//! Study "array of pairs" and "nested pairs".
int main() 
{
    // Methods to create pair.

    //Method 1:
    pair<int,int> p = {1,2};
    //Method 2:
    pair<int,int> q(3,4);
    //Method 3: Compiler automatically detects types.
    auto r = make_pair(5,6);


    // Accessing the elements.
    cout << "the first element of the pair 'p' is : " << p.first << " and the second element of the pair 'p' is : " << p.second << endl;;

    //Modyfing the elements.
    p.first = 10;
    p.second = 20;
    cout << "the first and second elements of pair 'p' are : " << p.first << " and " << p.second;

    // Pair with different data types.
    //Suppose we need to store maeks of the students.
    pair<string, int> student = {"divyansh", 78};
    cout << endl;
    cout << "Pair with different data types." << endl;
    cout << "student's name:" << student.first << endl;
    cout << "students marks:" << student.second << endl;

    vector<pair<int, int>> vec;
    vec.push_back({9,10});
    vec.push_back({5,6});
     vec.push_back({11,12});
    vec.push_back({7,8});
    
   
    cout << "this is pair vector & before sorting : " << endl;
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second;
        cout << endl;
    }
    sort(vec.begin(), vec.end());
    /*Here also if the "first" element is same then sorting is done by using the "second" element. */
    cout << "this is pair vector & after sorting : " << endl;
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second;
        cout << endl;
    }
    /* Comparison in pairso. first the "first" of both the pairs are compared Which ever is bigger that becomes big. if the "first" is equal then "second" is compared.*/

    cout << (p < q) << endl;
    

    return 0;
}
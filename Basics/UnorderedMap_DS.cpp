#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/* An unordered map is a data structure in C++ (from the STL) that stores data in key–value pairs and provides fast lookup, insertion, and deletion.It is implemented using a hash table.*/
int main() 
{
    unordered_map<int, string> m;
m.insert({2, "ab"});
m.insert({4, "cd"});
m.insert({3, "ef"});
m.insert({5, "gh"});
m.insert({1, "ij"});
m.insert({7, "kl"});
m.insert({0, "mn"});

/*Below in the given loop "x" is not an "iterator" it is a pair
Each iteration copies one element from the map into "x".
Since a map stores elements as -> pair<const int, int>
x becomes something like -> pair<const int, int> x*/
for(auto x : m)
{
    cout << x.first << " -> " << x.second << endl;
}

/*Rest all the inbuilt functions of the "map" are applicable to 
"unordered map" as well with the same working as it is.*/


    return 0;
}
#include <iostream>
#include <vector>
#include <map>
using namespace std;
/* unorderd map -> it can accept pairs with same "keys". And those "keys" ae sorted in ascending order. */
int main() 
{
    multimap<int, char> mm;
    mm.insert({1, 'a'});
    mm.insert({1, 'a'});
    mm.insert({2, 'b'});
    mm.insert({3, 'd'});
    mm.insert({1, 'a'});
    mm.insert({2, 'q'});
    mm.insert({1, 'a'});
    mm.insert({3, 'z'});
    mm.insert({3, 'o'});

    /*here it first prints all the pairs with "key" value "1" then "2" and then "3". */
    for(auto x : mm)
    {
        cout << x.first << " -> " << x.second << endl;
    }
    
    /*This will return you a pair of iterators where the "first" iterator points to the first occurence of "3" and "second" iterator points to the first element after all the 3's.*/
    auto it = mm.equal_range(3);

    cout << endl;
    for(auto i = it.first; i != it.second; i++)
    {
        cout << (*i).first << " -> " << (*i).second << endl;
    }
    return 0;
}
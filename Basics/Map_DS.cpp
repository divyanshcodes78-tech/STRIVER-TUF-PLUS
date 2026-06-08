#include <iostream>
#include <vector>
#include <map>
using namespace std;
/* Map -> A map stores data in key-value pairs. like:
101 -> 85, 102 -> 90, 103 -> 99. So here "101, 102, 103" are the keys and 
"85, 90, 99" are the correspomding value to thekeys.*/
int main() 
{
    // Syntax: map<data_type1, data_type2> map_name.
    map<int, string> m;

    /*In this data structure operations like "insert", "erase", "find" and "access" they have a time complexity of O(log n).*/
    //Inserting data.
    m[20] = "rohan";
    m[21] = "sohan";
    m.insert({22, "sonu"});
    m.insert({23, "tonu"});
    m.insert(make_pair(24, "ram"));
    m.insert(make_pair(25, "shyam"));

    /*The elemets in the "map" data structure are stored in form of pairs so we need to access them as ".first" & ".second"*/
    
    for(auto x : m)
    {
        cout << x.first << " -> " << x.second;
        cout << endl;
    }

    /* Automatic Sorting -> Keys are always stored in sorted order.*/

    m.insert(make_pair(25, "shreya"));
    /* here we are tying to insert duplicate key  "25" but this fails as it already exists. */

    /* yes but modification can change the "value" to a corresponding key.*/

    /*The second assignment overwrites the first value.*/
    m[25] = "shreya";

    cout << endl;
    for(auto x : m)
    {
        cout << x.first << " -> " << x.second;
        cout << endl;
    }

    auto it = m.find(20);
    /*so this will point to an pair that has a "key" and a "value."*/
    cout << endl;
    cout << (*it).first << " -> " << (*it).second;

    auto it1 = m.find(27);
    cout << endl;
    if(it1 == m.end())
    {
        cout << "pair not found." << endl;
    }

    /* lowe_bound() -> will give you the iterator pointing to the first "key" >= x.*/
    auto it2 = m.lower_bound(22);
    cout << (*it2).first << " -> " << (*it2).second;

    /* upper_bound() -> will give you the iterator pointing to the first "key" > x.*/
    auto it3 = m.upper_bound(22);
    cout << endl;
    cout << (*it3).first << " -> " << (*it3).second;
    return 0;
}
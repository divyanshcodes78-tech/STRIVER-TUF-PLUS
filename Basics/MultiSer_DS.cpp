#include <iostream>
#include <vector>
#include <set>
using namespace std;
/*MultiSet -> the only major difference "set" & "multiset" is that "multiset" stores duplicate elements as well and that to in sorted order like set.*/

int main() 
{
    multiset<int> ms;

    ms.insert(1);
     ms.insert(1);
     ms.insert(1);
     ms.insert(2);
     ms.insert(3);
     ms.insert(2);
     ms.insert(3);
     ms.insert(4);
     ms.insert(4);
     ms.insert(4);
     ms.insert(5);

     for(auto x : ms)
     {
        cout << x << " ";
     }
    
     // Find -> return the iterator to the first occurence.
     auto it1 = ms.find(2);
     cout << endl;
     cout << *(it1) << endl;

     // Count -> here it gives total occurences of the elements. Unlike in
     // set where it tells about the existence in binary terms.
     int occu = ms.count(1);
     cout << occu << endl;

     /* erase(value) -> it erases all the occurences of the "value" from the multise*/
     ms.erase(1);
     for(auto x : ms)
     {
        cout << x << " ";
     }

     /*Just in case you want to erase only one occurence.*/
     auto it2 = ms.find(2); // This would store the 1st occurence of "1".
     ms.erase(it2);
     cout << endl;
     for(auto x : ms)
     {
        cout << x << " ";
     }

     /* Functions like "size()", "empty()", "clear()", "upper_bound()", "lower_bound()" have the same working that of in "set" DS.*/

    return 0;
}
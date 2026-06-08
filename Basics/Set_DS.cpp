#include <iostream>
#include <vector>
#include <set>
using namespace std;
/* Set -> is an STL container that stores unique elements in sorted order.
*/
int main() 
{
    // Syntax: set<data_type> set_name.
    // Declaretion.
    set<int> st;

    // Insertion takes O(log n) time.
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(50);
    st.insert(60);

    // erase() -> removes a paticular element.(O(log n))
    st.erase(20);


    // count() -> checks existense of a element. Tells that wether an element
    // is present in the "set" or not  & gives binary answer.
    cout << st.count(20) << endl;

    // size() -> Returns number of elements.
    cout << st.size() << endl;

    // empty() -> Checks whether set is empty.
    if(st.empty() == true)
    {
        cout << "set is empty" << endl;
    }
    else
    {
        cout << "the set in not empty" << endl;
    }
    
    // clear() -> Removes all elements.

    // Traversing a Set -> sets support iterators:
    for(auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " ";
    }

    // st.begin() -> points to the smallest element.
    cout << endl;
    cout << *(st.begin()) << endl;

    auto it1 = st.begin();
    it1++;

    auto it2 = st.end();
    it2--;

    st.erase(it1, it2);

    for(auto x : st)
    {
        cout << x << " ";
    }

    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(50);
    st.insert(60);
    // Lower Bound -> return the iterator to first element >= x.
    auto it3 = st.lower_bound(20);
    cout << endl;
    cout << *it3 << endl;

    // Upper Bound -> return the iterator to first element > x.
    auto it4 = st.upper_bound(20);
    cout << *it4 << endl;
    return 0;
}
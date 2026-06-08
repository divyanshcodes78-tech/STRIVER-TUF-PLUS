#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/* An unordered_set stores unique elements like a set, but it does not keep them sorted.*/

int main() 
{
    unordered_set<int> us;
    us.insert(10);
us.insert(10);
us.insert(30);
us.insert(20);
us.insert(40);
us.insert(1);
us.insert(10);

for(auto x : us)
{
    cout << x << " ";
}

auto it = us.find(50);
cout << endl;
if(it != us.end())
{
    cout << "found" << endl;
}
else
{
    cout << "not found" << endl;
}

/* here also since duplicates are not allowed like "set" "count()" tells about the existence of the element with binary output.
Here also you can "erase()" a specific value liek "set".
erase by iterator -> us.erase(us.find(x))*/

us.erase(us.find(30));
for(auto x : us)
{
    cout << x << " ";
}

/*"size()", "empty()", "clear()" work in the same way.*/
/*Since there is no order there exist no "upeer_bound()" and "lower_bound()" function.*/
    return 0;
}
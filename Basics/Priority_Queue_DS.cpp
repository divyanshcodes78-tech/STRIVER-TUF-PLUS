#include <iostream>
#include <vector>
#include <queue>

using namespace std;
/*Priority Queue -> it is very similar to queue where as it follows all the standards, rules, principles, and working of queue. But the only difference is that as we add elements to this "Priority Quque" is stats arraching arragign them in the highest order of their weight. Suppose we enter 12, 17,10,0,2,3,4,8,7,6 -> this is all radnom insertion but it Stores in order of highest prioroty/weight to lowest.
Memory: 17, 12, 10, 8, 7, 6, 4, 3, 2, 0. */
int main() 
{
    // Syntax: priority_queue<data_type> priority_queue_name.

    // Else all things are same as the "queue".
    priority_queue<int> pq;

pq.push(10);
pq.push(50);
pq.push(20);
pq.push(40);
pq.push(30);

    // Here instead of ".front()" we use ".top()" to access the top element.
    cout << "the top element is : " << pq.top() << endl;

    // The process to remove the top element is same ".pop()".
    pq.pop();
    cout << "the top element after popping : " << pq.top() << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
/* Queue -> it is data structure where we keep inserting elements at the back of each element. 10 <- 20 <- 30 <- 40 <- 50. And they accumulayte in a quque like kids standing school line. It works on the principle of "FIFO" -> "First in First Out" means that the elements that goes first will also come out first. */
int main() 
{
    // Syntax: queue<data_type> queue_name.

    //Decleration.
    queue<int> q;

    // Adds an element to the rear of the queue.
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // Memory: 10 <- 20 <- 30 <- 40 <- 50.

    // Returns the first element.
    cout << "First element before popping : " << q.front() << endl;

    // Returns the number of elements.
    cout << "size of queue before popping : " << q.size() << endl;

    // Removes the front element.
    q.pop();
    // Memory: 20 <- 30 <- 40 <- 50.
    cout << "First element after popping : " << q.front() << endl;
    cout << "size of queue after popping : " << q.size() << endl;


    // Returns the last element.
    cout << q.back() << endl;

    while(q.empty() == false)
    {
        cout << q.front() << endl;
        q.pop();
    }

    if(q.empty() == true)
    {
        cout << "the queue is empty : " << endl;
    }

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    queue<int> p;
    p.push(6);
    p.push(7);
    p.push(8);
    p.push(9);
    p.push(10);

    cout << "the first element of queue 'p' & 'q' before swapping : " << p.front() << " and " << q.front() << endl;

    swap(q, p);
    cout << "the first element of queue 'p' & 'q' after swapping : " << p.front() << " and " << q.front() << endl;
    return 0;
}
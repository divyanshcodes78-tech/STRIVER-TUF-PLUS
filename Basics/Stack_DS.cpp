#include <iostream>
#include <vector>
#include <stack>
using namespace std;
/* Stack -> this is like aadding ont thing above the another. Where the thing that you can remove is the last added. Like stacking plates one above the another from bottom to top. So you can only pick the plate that was stacked last. This principle is also known as "LIFO" -> that is "Last In First Out".
Meaning that the thing which went inside the last will be the first one to come out.*/

/* Assuming that we need to stack 10, 20, 30, 40:
40
30
20
10 This is how we will be stacking the elements.*/
int main() 
{
    // Stack syntax: stack<data_type> stack_name.

    //Decleraing an empty stack.
    stack<int> st;

    //Inserting elements.
    st.push(10);
    st.push(20);
    st.push(30);

    //This is how we access the top element.Does NOT remove element.
    cout << st.top() << endl;

    //This is how we "remove" the top element from the stack.
    st.pop();
    cout << "accessing the top element after using pop() : " << st.top() << endl;

    //This is how we get the "size"of the element.
    cout << "stack size : " << st.size() << endl;

    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);
    st.push(500);
    st.push(600);

    while(st.empty() == false)
    {
        cout << st.top() << endl;
        st.pop();
    }
    
    if(st.empty())
    {
        cout << "the stack is empty." << endl;
    }

    stack<int> s1;
    s1.push(10);
    s1.push(9);
    s1.push(8);
    s1.push(7);
    s1.push(6);
    
    stack<int> s2;
    s2.push(5);
    s2.push(4);
    s2.push(3);
    s2.push(2);
    s2.push(1);
    
    cout << "tops of s1 and s2 before swapping : " << s1.top() << " " << s2.top() << endl;

    swap(s1,s2);
    cout << "tops of s1 and s2 after swapping : " << s1.top() << " " << s2.top() << endl;

    return 0;
}
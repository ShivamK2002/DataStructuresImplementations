#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Stack
{
public:
    Node *top;

    int size;
    Stack()
    {
        top = NULL;
        size = 0;
    }
    void push(int data)
    {
        Node *newNode = new Node(data);

        newNode->next = top;
        top = newNode;
        size++;
    }
    void pop()
    {
        if (top == NULL)
            cout << "stack underflow";
        else
        {
            top = top->next;
            size--;
        }
    }
    int peek()
    {
        if (top != NULL)
            return top->data;
    }
    bool isEmpty()
    {
        if (top == NULL)
            return true;
        return false;
    }
    int mysize()
    {
        return size;
    }
};
int main()
{
    Stack *st = new Stack();
    st->push(10);
    st->push(10);
    st->push(10);
    st->push(10);
    st->push(20);
    // cout<<st->peek()<<endl;
    cout << st->mysize();
    // st->pop();
    // st->pop();
    // st->pop();
    // st->pop();
    // st->pop();
    // cout<<st->peek()<<endl;
    // cout<<st->isEmpty()<<endl;

    return 0;
}

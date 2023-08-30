#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele)
    {
        top++;
        if (top < size)
            arr[top] = ele;
        else
            cout << "stack overflow" << endl;
    }
    void pop()
    {
        if (top != -1)
            top--;
        else
            cout << "stack underflow";
    }
    int peek()
    {
        if (top != -1)
            return arr[top];
        else
            cout << "stack underflow";
        return 0;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }
};
int main()
{
    //   cout << "Hello world!" << endl;
    Stack *st = new Stack(5);
    st->push(50);
    st->push(50);
    st->push(50);
    st->push(50);
    st->push(20);
    // st->push(50);
    st->pop();

    cout << st->peek() << endl;
    cout << st->isEmpty() << endl;
    // cout<<st->isEmpty()<<endl;
    return 0;
}
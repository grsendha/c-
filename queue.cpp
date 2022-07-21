#include <iostream>
using namespace std;
class Queue
{
    int a[10], front, rear, size;

public:
    Queue()
    {
        rear = 0, front = 0, size = 0;
    }
    void push(int ele)
    {
        if (size == 10)
        {
            cout << "Queue Overflow";
            return;
        }
        if (rear == 10)
        {
            cout << "Queue Saturated";
            return;
        }
        a[rear++] = ele;
        size++;
    }
    void pop()
    {
        if (size == 0)
        {
            cout << "Queue underflow";
            return;
        }
        front++;
        size--;
    }
    int peek()
    {
        if (size == 0)
        {
            cout << "Queue is empty";
        }
        return a[front];
    }
};
int main()
{
    Queue q;
    for (int i = 1; i <= 10; i++)
    {
        cout << i*10 << " ";
        q.push(i * 10);
    }
    cout<<endl;
    q.pop();
    q.pop();
    cout<<q.peek();
}
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x)
{
    if (pos + 1 < MX)
    {
        dat[pos++] = x;
    }
    else
        cout << "스택 다 찼어요!!!";
}

void pop()
{
    if (pos > 0)
        pos--;
    else
        cout << "스택이 비었어요!!";
}

int top()
{
    if (pos > 0)
        return dat[pos - 1];
    else
    {
        cout << "스택이 비었어요!!";
        return -1;
    }
}

void test()
{
    push(5);
    push(4);
    push(3);
    cout << top() << '\n'; // 3
    pop();
    pop();
    cout << top() << '\n'; // 5
    push(10);
    push(12);
    cout << top() << '\n'; // 12
    pop();
    cout << top() << '\n'; // 10
}

int main(void)
{
    test();
}
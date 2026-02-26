// https://www.acmicpc.net/problem/10828
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

bool empty(){
    return (pos==0);
}
int size(){
    return pos;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    while (n--)
    {
        string cmd;
        cin >> cmd;
        
        if (cmd == "push")
        {
            int data;
            cin >> data;
            push(data);
        }
        else if (cmd == "pop")
        {
            if (empty())
                cout << -1<<'\n';
            else
            {
                cout << top() << '\n';
                pop();
                
            }
                
        }
        else if (cmd == "size")
            cout << size() << '\n';
        else if (cmd == "empty")
            cout << (empty() ? 1 : 0) << '\n';
        else
            cout << (empty() ? -1 : top()) << '\n';
    }
}
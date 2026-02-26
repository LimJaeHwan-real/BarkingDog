// https://www.acmicpc.net/problem/10828
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> S;
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
            S.push(data);
        }
        else if (cmd == "pop")
        {
            if (S.empty())
                cout << -1<<'\n';
            else
            {
                cout << S.top() << '\n';
                S.pop();
                
            }
                
        }
        else if (cmd == "size")
            cout << S.size() << '\n';
        else if (cmd == "empty")
            cout << (S.empty() ? 1 : 0) << '\n';
        else
            cout << (S.empty() ? -1 : S.top()) << '\n';
    }
}
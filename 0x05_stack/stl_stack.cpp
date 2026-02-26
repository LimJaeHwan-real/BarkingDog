#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.size()<<'\n';
    cout<<s.empty()<<'\n';
    s.pop();
    cout<<s.top()<<'\n';
    s.pop();
    cout<<s.top()<<'\n';
    s.pop();
    if(s.empty())cout<<"s is empty\n";
    cout<<s.top()<<'\n';
    
    return 0;
}

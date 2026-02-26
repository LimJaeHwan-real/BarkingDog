#include <bits/stdc++.h>
using namespace std;

void print(list<int>arr){
    for(auto i: arr)
        cout<<i<<' ';

    cout<<'\n';
}
int main()
{
    list<int>L={1,2};
    list<int>::iterator t=L.begin();
    L.push_front(10);
    print(L);
    cout<<*t<<'\n';
    L.push_back(5);
    print(L);
    L.insert(t,6);
    print(L);
    t++;
    t=L.erase(t);
    print(L);
    cout<<*t<<"return \n";
    for(auto i:L)cout<<i<<' ';
    cout<<'\n';
    for(list<int>::iterator it=L.begin();it!=L.end();it++)
        cout<<*it<<' ';

    return 0;
}

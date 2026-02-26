#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m;
    cin>>m;
    queue<int>Q;
    while(m--){
        string cmd;
        cin>>cmd;
        if(cmd=="push"){
            int data;
            cin>>data;
            Q.push(data);

        }else if(cmd=="pop"){
            if(Q.empty())
                cout<<-1<<'\n';
            else{
                cout<<Q.front()<<'\n';
                Q.pop();
            }
                
        }else if(cmd=="size"){
            cout<<Q.size()<<'\n';
        }else if(cmd=="empty"){
            cout<<(Q.empty()?1:0)<<'\n';
        }else if(cmd=="front"){
            cout<<(Q.empty()? -1:Q.front())<<'\n';
        }else{
            cout<<(Q.empty()? -1:Q.back())<<'\n';
        }
    }
    return 0;
}

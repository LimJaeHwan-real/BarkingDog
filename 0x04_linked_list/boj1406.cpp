#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> str;
    string s;
    cin >> s;
    for (auto c : s)
        str.push_back(c);

    int m;
    cin >> m;
    auto cursor = str.end();
    while (m--)
    {

        char cmd;
        cin >> cmd;
        if (cmd == 'P')
        {
            char c;
            cin >> c;
            str.insert(cursor,c);
            
        }
        else if (cmd == 'L' )
        {
            if (cursor != str.begin())
                cursor--;
        }
        else if (cmd == 'D')
        {
            if (cursor != str.end())
                cursor++;
        }else if(cmd == 'B'){
            if(cursor!=str.begin()){
                cursor--;
                cursor=str.erase(cursor);
            }
                
     
        }
    }

    for (auto c : str)
        cout<<c;
}
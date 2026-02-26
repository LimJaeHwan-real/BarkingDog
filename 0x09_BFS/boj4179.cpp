// https://www.acmicpc.net/problem/4179

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[1002];
int dist[1002][1002];
int dist_jh[1002][1002];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int r, c;
queue<pair<int, int>> Q1;
queue<pair<int, int>> Q2;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        fill(dist[i], dist[i] + c, -1);            
        fill(dist_jh[i], dist_jh[i] + c, -1);            
    }
       

    for (int i = 0; i < r; i++)
    {
        cin >> board[i];
        for (int j = 0; j < c; j++)
        {
            if (board[i][j] == 'J')
            {
                Q2.push({i,j});
                dist_jh[i][j]=0;
            }
                
            if (board[i][j] == 'F')
              {
                Q1.push({i,j});
                dist[i][j]=0;
            }
        }
    }

    while (!Q1.empty())
    {
        auto cur = Q1.front();
        Q1.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || ny < 0 || nx >= r || ny >= c)
                continue;
            if (dist[nx][ny] >= 0|| board[nx][ny] == '#' )
                continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q1.push({nx, ny});
        }
    }

    while (!Q2.empty())
    {
        auto cur = Q2.front();
        Q2.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if (nx < 0 || ny < 0 || nx >= r || ny >= c)
            {
                cout<<dist_jh[cur.X][cur.Y]+1;
                return 0;
            }
            if (dist_jh[nx][ny] >= 0|| board[nx][ny] == '#' )
                continue;
            if(dist[nx][ny]!=-1 && dist[nx][ny]<=dist_jh[cur.X][cur.Y]+1)continue;
            dist_jh[nx][ny] = dist_jh[cur.X][cur.Y] + 1;
            Q2.push({nx, ny});
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
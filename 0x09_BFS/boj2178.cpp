//https://www.acmicpc.net/problem/2178
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
string board[102];
int dist[102][102];
int n,m;
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>board[i];
    }
    for(int i=0;i<n;i++) fill(dist[i],dist[i]+m,-1);
    dist[0][0]=0;
    queue<pair<int,int>> Q;
    Q.push({0,0});
    while(!Q.empty()){
        pair<int,int> cur=Q.front();
        Q.pop();
        for(int i=0;i<4;i++){
            int nx=cur.X+dx[i];
            int ny=cur.Y+dy[i];
            if(nx<0||ny<0||nx>=n||ny>=m)continue;
            if(dist[nx][ny]>=0||board[nx][ny]=='0')continue;
            dist[nx][ny]=dist[cur.X][cur.Y]+1;
            Q.push({nx,ny});
            
        }
    }
    cout<<dist[n-1][m-1]+1;
    return 0;
}
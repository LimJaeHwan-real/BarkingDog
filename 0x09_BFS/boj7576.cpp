// https://www.acmicpc.net/problem/7576

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[1002][1002];
int dist[1002][1002];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int n,m;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>m>>n;

  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        cin>>board[i][j];
        if(board[i][j]==0)
            dist[i][j]=-1;
    }

  queue<pair<int,int>> Q;
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        if(board[i][j]==1)
        {
            Q.push({i,j});
            dist[i][j]=0;
        }
        
    }

   while(!Q.empty()){
    auto cur=Q.front();
    Q.pop();
    for(int i=0;i<4;i++){
        int nx=cur.X+dx[i];
        int ny=cur.Y+dy[i];
        if(nx<0||ny<0||nx>=n||ny>=m)continue;
        if(dist[nx][ny]>=0)continue;
        Q.push({nx,ny});
        dist[nx][ny]=dist[cur.X][cur.Y]+1;


    }
   }

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
        if(dist[i][j]<0)
            {
                cout<<-1;
                return 0;
            }
    }

    int answer=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
       answer=max(answer,dist[i][j]);
    }
    cout<<answer;
    return 0;

}
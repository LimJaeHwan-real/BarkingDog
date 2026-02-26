//https://www.acmicpc.net/problem/1926
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int g[502][502];
int vis[502][502];
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int largest;
int num;
int m,n;
int bfs(int x,int y){
    if(vis[x][y]||!g[x][y])
        return 0;
    num++;
    vis[x][y]=1;
    queue<pair<int,int>> Q;
    Q.push({x,y});
    int width=0;
    while(!Q.empty()){
        pair<int,int> cur =Q.front();
        Q.pop();
        width++;
        for(int i=0;i<4;i++){
            int nx=cur.X+dir[i][0];
            int ny=cur.Y+dir[i][1];
            if(nx<0||ny<0||nx>=m||ny>=n)continue;
            if(vis[nx][ny]||!g[nx][ny])continue;
            vis[nx][ny]=1;
            Q.push({nx,ny});

        }
    }
    return width;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>m>>n;
  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        int t;
        cin>>t;
        g[i][j]=t;
    }

 for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
       int width=bfs(i,j);
       largest=max(width,largest);

    }
  cout<<num<<'\n'<<largest;

}
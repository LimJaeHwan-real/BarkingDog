//https://www.acmicpc.net/problem/1697
#include <bits/stdc++.h>
using namespace std;


int dist[100002];
int n,k;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    queue<int>Q;
    Q.push(n);
    fill(dist,dist+100001,-1);
    dist[n]=0;
    while(dist[k]==-1){
        int cur=Q.front();Q.pop();
        int arr[]={cur+1,cur-1,cur*2};
        for(auto i:arr){
            if(i<0||i>100000)continue;
            if(dist[i]>=0)continue;
            Q.push(i);
            dist[i]=dist[cur]+1;
           
        }
    }
    cout<<dist[k];
                
    return 0;
}
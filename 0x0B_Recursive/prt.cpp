// 
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0)
        return;
    print(n-1);
    cout<<n<<' ';
}

int sum(int n){
    if(n>0)
        return n+sum(n-1);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  print(3);
  cout<<sum(10);
}
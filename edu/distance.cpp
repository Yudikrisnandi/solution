/**
 *    author:  ykaka
 *    created: 25.08.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
using ll = long long;
 
int main(){
  int n;
  ll d;
  cin >> n >> d;
  int ans = 0;
  rep(i,n){
    ll x, y;
    cin >> x >> y;
    if(x*x + y*y <= d*d) ans++;
  }
  cout << ans << endl;
  return 0;
}


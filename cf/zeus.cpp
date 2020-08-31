/**
 *    author:  ykaka
 *    created: 09.08.2020 18:04:18       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
#define pb push_back
using namespace std;
using ll = long long;
 
int main(){
  int n, x;
  cin >> n;
  vector<int> v;
  int big = 0;
  while(n--){
    cin >> x;
    if(x > big){
      big = x;
    }
    v.pb(x);
  }
  int ans = 0;
  for(int i = 0; i < v.size(); i++) {
    ans += (big - v[i]);
  }
  cout << ans << '\n';
  return 0;
}


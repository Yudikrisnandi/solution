/**
 *    author:  ykaka
 *    created: 27.09.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
#define pb push_back
using ll = long long;
typedef unsigned long long ull;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
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


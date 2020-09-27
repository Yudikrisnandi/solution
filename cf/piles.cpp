/**
 *    author:  ykaka
 *    created: 27.09.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
typedef unsigned long long ull;

void solve(){
  int n = 3;
  long long x;
  long long t = 0;
  while(n--){
    cin >> x;
    t += x;
  }
  cout << t / 2 << endl;
}

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int q;
  cin >> q;
  while(q--)solve();
  return 0;
}


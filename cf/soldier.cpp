/**
 *    author:  ykaka
 *    created: 27.09.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
typedef unsigned long long ull;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int k, n, w;
  cin >> k >> n >> w;
  int total = (w * (k + (w * k))) / 2;
  if(total > n){
    cout << total - n << endl;
  }else if(total <= n){
    cout << 0 << endl;
  }
  return 0;
}


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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int v[4] = {a, b, c, d};
  map<int, int>m;
  for(int i = 0; i < 4; i++){
    m[v[i]] = m[v[i]] + 1;
  }
  cout << 4 - m.size() << endl;
  return 0;
}


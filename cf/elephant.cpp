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
  int x;
  cin >> x;
  int step = x / 5;
  int re = (x % 5 == 0) ? 0 : 1;
  cout << step + re << endl;
  return 0;
}


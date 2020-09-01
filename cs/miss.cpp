/**
 *    author:  ykaka
 *    created: 01.08.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
typedef unsigned long long ull;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  ull n, m, k, s = 0ull;
  cin >> n;
  k = n;
  while(--n){
    cin >> m;
    s += m;
    k += n;
  }
  cout << k - s << endl;
  return 0;
}


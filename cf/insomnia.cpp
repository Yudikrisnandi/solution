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
  int k, l, m, n, d;
  cin >> k >> l>> m >> n >> d;
  int c = 0;
  for(int i = 1 ; i <= d; i++){
    if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
      c++;
    }
  }
  cout << c << endl;
  return 0;
}


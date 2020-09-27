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
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    int a = n / 2;
    int s = n % 2;
    a *= m;
    if(s != 0) {
      int t = s * m;
      a += t / 2;
      if( t % 2 != 0){
        a += 1;
      }
    }
    cout << a << endl;
  }
  return 0;
}


/**
 *    author:  ykaka
 *    created: 11.08.2020 18:04:18       
**/
 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
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


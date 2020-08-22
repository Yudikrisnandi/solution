/**
 *    author:  ykaka
 *    created: 09.08.2020 18:04:18       
**/
 
#include <bits/stdc++.h>
using namespace std;

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
  int q;
  cin >> q;
  while(q--)solve();
  return 0;
}


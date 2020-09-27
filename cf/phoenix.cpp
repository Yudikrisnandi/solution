/**
 *    author:  ykaka
 *    created: 27.09.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
using ll long long;
typedef unsigned long long ull;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int t, x;
  cin >> t;
  while(t--){
    cin >> x;
    ll a;
    ll b = 0;
    a = pow(2, x);
    for(int i = x - 1; i >= x / 2; i--) {
      b += pow(2, i);
    }
    for(int i = 1; i < x/2; i++) {
      a += pow(2, i);
    }
    cout << a - b << endl;
  }
  return 0;
}


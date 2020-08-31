/**
 *    author:  ykaka
 *    created: 10.08.2020 18:04:18       
**/
 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
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


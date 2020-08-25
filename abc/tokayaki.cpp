/**
 *    author:  ykaka
 *    created: 01.08.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
using ll = long long;
 
int main(){
  int n, x, t;
  cin >> n >> x >> t;
  int b = n / x;
  if(n % x != 0){
    b += 1;
  }
  cout << b * t << endl;
  return 0;
}


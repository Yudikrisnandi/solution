/**
 *    author:  ykaka
 *    created: 01.08.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
using ll = long long;

int sum(ll n) {
  int total = 0;
  while(n != 0){
    int mod = n % 10;
    total += mod;
    n = n / 10;
  }
  return total;
}
 
int main(){
  ll n;
  cin >> n;
  int res = sum(n);
  if(res % 9 == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}


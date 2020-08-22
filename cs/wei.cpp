/**
 *    author:  ykaka
 *    created: 01.08.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
using ll = long long;
 
int main(){
  ll n;
  cin >> n;
  while(n != 1){
    cout << n << " ";
    if(n % 2 == 0){
      n = n / 2;
    }else {
      n = (n * 3) + 1;
    }
  }
  cout << n << endl;
  return 0;
}


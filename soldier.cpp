/**
 *    author:  ykaka
 *    created: 01.08.2020 13:34:48       
**/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int k, n, w;
  cin >> k >> n >> w;
  int total = (w * (k + (w * k))) / 2;
  if(total > n){
    cout << total - n << endl;
  }else if(total <= n){
    cout << 0 << endl;
  }
  return 0;
}


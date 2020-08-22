/**
 *    author:  ykaka
 *    created: 09.08.2020 18:04:18       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
#define pb push_back
using namespace std;
 
int main(){
  int n = 4;
  vector<int>v;
  rep(i,n){
    int a;
    cin >> a;
    v.pb(a);
  }
  sort(v.begin(), v.end());
  cout << v[3]-v[0]<<" "<< v[3]-v[1] <<" " <<  v[3] - v[2] << "\n";
  return 0;
}


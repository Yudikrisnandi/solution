/**
 *    author:  ykaka
 *    created: 27.09.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
#define pb push_back
using namespace std;
typedef unsigned long long ull;


int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
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


/**
 *    author:  ykaka
 *    created: 22.08.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
using ll = long long;
 
int main(){
  int t;
  cin >> t;
  for(int k = 0; k < t; k++){
    int n;
    int b;
    cin >> n >> b;
    vector<int>v;
    rep(i, n){
      int x;
      cin >> x;
      v.push_back(x);
    }
    sort(v.begin(), v.end());
    int total = 0;
    int solve = 0;
    rep(i,n){
      int curr = total + v[i];
      if(curr <= b){
        total += v[i];
        solve++;
      }else{
        break;
      }
    }

    cout << "Case #" << (k+1) << ": " << solve << endl;
  }
  return 0;
}


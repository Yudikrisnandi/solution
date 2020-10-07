/**
 *    author:  ykaka
 *    created: 27.09.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
typedef unsigned long long ull;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<vector<int>> v; 
  int left = 0;
  int right= 0;
  rep(i, n){
    vector<int> temp;
    rep(j, n){
      int val;
      cin >> val;
      temp.push_back(val);
    }
    v.push_back(temp);
    temp.clear();
  }
  int t = n - 1;
  int j = 0;
  rep(i,n){
    if(i == j){
      left += v[i][j];
      right += v[i][t];
    }
    j++;
    t--;
  }
  int res = left > right ? left -right : right - left;
  cout << res << endl;
  return 0;
}

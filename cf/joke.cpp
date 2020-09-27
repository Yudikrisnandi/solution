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
  string s;
  cin >> s;
  string d;
  cin >> d;
  string f;
  cin >> f;
  int n = s.size() + d.size();
  map<char, int>m;
  map<char, int>g;
  string ans = "YES";
  if(f.size() != n){
    ans = "NO";
  }else{
    string sd = s + d;
    for(int i = 0; i < sd.size(); i++){
      m[sd[i]] = m[sd[i]] + 1;
    }
    for(int i = 0; i < f.size(); i++){
      g[f[i]] = g[f[i]] + 1;
    }
    if(m == g )
      ans = "YES";
    else
      ans= "NO";
  }
  cout << ans << endl;
  return 0;
}


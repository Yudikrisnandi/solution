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
  int n ;
  cin >> n;
  string s;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  int v[n] = {0};
  string ans = "YES";
  if(n < 26)
    ans = "NO";
  else if(n >= 26)
    for(int i = 0; i < n; i++){
      int idx = s[i] - 'a';
      v[idx] = v[idx] + 1;
    }
  for(int i = 0; i < 26 ; i++) {
    if(v[i] == 0){
      ans= "NO";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}


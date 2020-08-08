/**
 *    author:  ykaka
 *    created: 07.08.2020 18:26:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
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


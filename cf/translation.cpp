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
  string t;
  cin >> t;
  string str = "";
  for(int i = s.size() - 1; i >= 0; i--) {
    str += s[i];
  }
  if(str == t) {
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}


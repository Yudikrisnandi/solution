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
  map<char, int> m;
  for(auto c : s){
    m[c] = m[c] + 1;
  }

  map<char, int>::iterator itr;
  int i = 0;
  for(itr = m.begin(); itr != m.end(); itr++){
    i++;
  }
  string res;
  res = i % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!";
  cout << res << endl;
  return 0;
}


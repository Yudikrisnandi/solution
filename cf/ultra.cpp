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
  string s1, s2;
  cin >> s1;
  cin >> s2;
  for(int i = 0; i < s1.size(); i++){
    if(s1[i] == s2[i])
      cout << "0";
    if(s1[i] != s2[i])
      cout << "1";
  }
  return 0;
}


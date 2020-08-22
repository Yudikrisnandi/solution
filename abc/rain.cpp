/**
 *    author:  ykaka
 *    created: 01.08.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
using ll = long long;
 
int main(){
  string s;
  cin >> s;
  int ts = 0;
  if(s[1] == 'S'){
    if(s[0] == 'R' || s[2] == 'R')ts++;
  }
  if(s[1] == 'R'){
    ts++;
    if(s[0] == 'R')ts++;
    if(s[2] == 'R')ts++;
  }
  cout << ts << endl;
  return 0;
}


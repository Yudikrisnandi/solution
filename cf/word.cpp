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
  int u = 0, l = 0;
  for(int i = 0; i < s.size(); i++){
    if(isupper(s[i])){
      u++;
    }else{
      l++;
    }
  }
  if(u > l){
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }else if(u <= l){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  cout << s << endl;
  return 0;
}


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
  for(int i = 0; i < s.size(); i += 2){
    for(int j = 0; j < s.size() - 1; j += 2){
      if(s[j] > s[j+2]){
        swap(s[j], s[j+2]);
      }
    }
  }
  cout << s << endl;
  return 0;
}


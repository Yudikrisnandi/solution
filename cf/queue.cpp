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
  int n , t;
  cin >> n >> t;
  string s;
  cin >> s;
  while(t--){
    for(int i = 0; i < n; i++) {
      if(s[i] == 'B' && s[i+1] == 'G'){
        s[i] = 'G';
        s[i+1] = 'B';
        i++;
      }
    }
  }
  cout << s << endl;
  return 0;
}


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
  string hate = "I hate ";
  string love = "I love ";
  string that = "that ";
  string it = "it";
  string s = "";
  for(int i = 1; i <= n; i++){
    if(i % 2 != 0 && i != n){
      s += hate;
      s += that;
    }else if(i % 2 != 0 && i == n){
      s += hate;
      s += it;
    }
    if(i%2 == 0 && i != n) {
      s += love;
      s += that;
    }else if(i%2 == 0 && i == n){
      s += love;
      s += it;
    }
  }
  cout << s << endl;
  return 0;
}


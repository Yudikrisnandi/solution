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
  long long n ;
  cin >> n;
  string s = to_string(n);
  int total = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '7'){
      total++;
    }else if(s[i] == '4'){
      total++;
    }
  }
  if(total == 4 || total == 7){
    cout << "YES" << endl;
  }else {
    cout << "NO" << endl;
  }
  return 0;
}


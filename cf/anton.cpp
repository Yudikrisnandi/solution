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
  int n;
  cin >> n;
  string s;
  cin >> s;
  int a = 0, d = 0;
  for(int i = 0; i < n; i++){
    if(s[i] == 'A') {
      a++;
    }else{
      d++;
    }
  }

  if(a > d){
    cout << "Anton" << endl;
  }else if(a < d){
    cout << "Danik" << endl;
  }else if(a == d){
    cout << "Friendship" << endl;
  }
  return 0;
}


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
  int t;
  long long a, b;
  cin >> t;
  while(t--){
    cin >> a >> b;
    if(a % b == 0){
      cout << 0 << endl;
    }else {
      int d = a % b;
      cout << b - d << endl;
    }
  }
  return 0;
}


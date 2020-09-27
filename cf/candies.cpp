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
  int t ;
  long long n;
  cin >> t;
  while(t--){
    cin >> n;
    if(n - 1 != 1 || n - 1 != 0){
      cout << (n -1) / 2 << endl;
    }else if(n -1 == 1 || n-1 == 0){
      cout << 0 << endl;
    }
  }
  return 0;
}


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
  int i, j, x = 0;
  for(i = 1; i <= 5; i++){
    for(j = 1; j <= 5; j++){
      cin >> x;
      if(x == 1){
        cout << abs(i - 3) + abs(j - 3) <<endl;
      }
    }
  }
  return 0;
}


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
  int a, b;
  int pre = 0;
  int total = 0;
  while(n--){
    cin >> a >> b;
    total = (total + b) - a;
    if(total > pre){
      pre = total;
    }
  }
  cout << pre << endl;
  return 0;
}


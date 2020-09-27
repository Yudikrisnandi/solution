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
  int a, b;
  cin >> a >> b;
  int i = 0;
  bool year = true;
  while(year){
    a *= 3;
    b *= 2;
    i++;
    if(a > b){
      year = false;
    }
  }
  cout << i << endl;
  return 0;
}


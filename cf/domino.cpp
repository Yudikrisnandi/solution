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
  int m, n;
  cin >> m >> n;
  int x = m / 2;
  int l = m % 2;
  int total = x * n;
  if(l != 0){
    int y = l * n;
    total = total + (y / 2);
  }
  cout << total << endl;
  return 0;
}


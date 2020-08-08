/**
 *    author:  ykaka
 *    created: 05.08.2020 20:05:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin >> n;
  int t = n;
  float ans = 0;
  while(n--){
    int x;
    cin >> x;
    ans += x;
  } 
  cout << ans / t  << endl;
  return 0;
}


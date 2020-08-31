/**
 *    author:  ykaka
 *    created: 01.08.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
using ll = long long;
 
int main(){
  double d, t, s;
  cin >> d >> t >> s;
  if(d / s <= t){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}


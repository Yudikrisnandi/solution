/**
 *    author:  ykaka
 *    created: 02.08.2020 10:19:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int x;
  cin >> x;
  int step = x / 5;
  int re = (x % 5 == 0) ? 0 : 1;
  cout << step + re << endl;
  return 0;
}


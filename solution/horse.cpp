/**
 *    author:  ykaka
 *    created: 07.08.2020 18:26:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int v[4] = {a, b, c, d};
  map<int, int>m;
  for(int i = 0; i < 4; i++){
    m[v[i]] = m[v[i]] + 1;
  }
  cout << 4 - m.size() << endl;
  return 0;
}


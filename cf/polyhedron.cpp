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
  string p;
  int ans = 0;
  while(n--){
    cin >> p;
    if(p == "Tetrahedron")
      ans += 4;
    if(p == "Cube")
      ans += 6;
    if(p ==  "Octahedron")
      ans += 8;
    if(p == "Icosahedron")
      ans += 20;
    if(p == "Dodecahedron")
      ans += 12;
  }
  cout << ans << endl;
  return 0;
}


/**
 *    author:  ykaka
 *    created: 07.08.2020 18:26:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
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


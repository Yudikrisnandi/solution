/**
 *    author:  ykaka
 *    created: 05.08.2020 07:26:48       
**/
 
#include <bits/stdc++.h>
using namespace std;

 
int main(){
  int t;
  long long a, b;
  cin >> t;
  while(t--){
    cin >> a >> b;
    if(a % b == 0){
      cout << 0 << endl;
    }else {
      int d = a % b;
      cout << b - d << endl;
    }
  }
  return 0;
}


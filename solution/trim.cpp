/**
 *    author:  ykaka
 *    created: 02.08.2020 09:34:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
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


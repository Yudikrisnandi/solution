/**
 *    author:  ykaka
 *    created: 07.08.2020 18:26:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int t ;
  long long n;
  cin >> t;
  while(t--){
    cin >> n;
    if(n - 1 != 1 || n - 1 != 0){
      cout << (n -1) / 2 << endl;
    }else if(n -1 == 1 || n-1 == 0){
      cout << 0 << endl;
    }
  }
  return 0;
}


/**
 *    author:  ykaka
 *    created: 02.08.2020 09:53:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n, k;
  cin >> n >> k;
  while(k--){
    if(n % 10 == 0){
      n = n / 10;
    }else{
      n--;
    }
  }
  cout << n << endl;
  return 0;
}


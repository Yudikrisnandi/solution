/**
 *    author:  ykaka
 *    created: 01.08.2020 13:34:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int a = 1;
  int b = 7;
  int i = 0;
  bool year = true;
  while(year){
    a *= 3;
    b *= 2;
    i++;
    if(a > b){
      year = false;
    }
  }
  cout << i << endl;
  return 0;
}

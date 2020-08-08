/**
 *    author:  ykaka
 *    created: 02.08.2020 19:26:48       
**/
 
#include <iostream>
using namespace std;
 
int main(){
  int n ;
  cin >> n;
  bool res = false;
  int x;
  while(n--){
    cin >> x;
    if(x == 1){
      res = true;
    }
  }
  if(res)
    cout << "HARD" << endl;
  else
    cout << "EASY" << endl;
  return 0;
}


/**
 *    author:  ykaka
 *    created: 02.08.2020 19:26:48       
**/
 
#include <iostream>
using namespace std;
 
int main(){
  int n , h;
  cin >> n >> h;
  int x;
  int total = 0;
  while(n--){
    cin >> x;
    if(x > h){
      total += 2;
    }else if(x <= h){
      total++;
    }
  }
  cout << total << endl;
  return 0;
}


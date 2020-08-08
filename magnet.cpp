/**
 *    author:  ykaka
 *    created: 02.08.2020 20:26:48       
**/
 
#include <iostream>
using namespace std;
 
int main(){
  int n ;
  cin >> n;
  int count = 0;
  string s;
  string pre = "pre";
  while(n--){
    cin >> s;
    if(pre != s){
      count++;
    }
    pre = s;
  }
  cout << count << endl;
  return 0;
}


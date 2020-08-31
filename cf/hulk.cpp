/**
 *    author:  ykaka
 *    created: 02.08.2020 20:26:48       
**/
 
#include <iostream>
using namespace std;
 
int main(){
  int n ;
  cin >> n;
  string hate = "I hate ";
  string love = "I love ";
  string that = "that ";
  string it = "it";
  string s = "";
  for(int i = 1; i <= n; i++){
    if(i % 2 != 0 && i != n){
      s += hate;
      s += that;
    }else if(i % 2 != 0 && i == n){
      s += hate;
      s += it;
    }
    if(i%2 == 0 && i != n) {
      s += love;
      s += that;
    }else if(i%2 == 0 && i == n){
      s += love;
      s += it;
    }
  }
  cout << s << endl;
  return 0;
}


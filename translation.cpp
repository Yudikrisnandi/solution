/**
 *    author:  ykaka
 *    created: 02.08.2020 13:26:48       
**/
 
#include <iostream>
using namespace std;
 
int main(){
  string s;
  cin >> s;
  string t;
  cin >> t;
  string str = "";
  for(int i = s.size() - 1; i >= 0; i--) {
    str += s[i];
  }
  if(str == t) {
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}


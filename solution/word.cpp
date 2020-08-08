/**
 *    author:  ykaka
 *    created: 02.08.2020 11:18:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  cin >> s;
  int u = 0, l = 0;
  for(int i = 0; i < s.size(); i++){
    if(isupper(s[i])){
      u++;
    }else{
      l++;
    }
  }
  if(u > l){
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }else if(u <= l){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  cout << s << endl;
  return 0;
}


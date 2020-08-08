/**
 *    author:  ykaka
 *    created: 05.08.2020 20:05:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s1, s2;
  cin >> s1;
  cin >> s2;
  for(int i = 0; i < s1.size(); i++){
    if(s1[i] == s2[i])
      cout << "0";
    if(s1[i] != s2[i])
      cout << "1";
  }
  return 0;
}


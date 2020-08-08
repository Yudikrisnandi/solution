/**
 *    author:  ykaka
 *    created: 07.08.2020 18:26:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  getline(cin, s);
  map<char, int> m;
  for(int i = 1; i < s.size() - 1; i++){
    m[s[i]] = m[s[i]] + 1;
    i += 2;
  }
  cout << m.size() << endl;
  return 0;
}


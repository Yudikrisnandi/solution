#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  map<char, int> m;
  for(auto c : s){
    m[c] = m[c] + 1;
  }

  map<char, int>::iterator itr;
  int i = 0;
  for(itr = m.begin(); itr != m.end(); itr++){
    i++;
  }
  string res;
  res = i % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!";
  cout << res << endl;  
  return 0;
}


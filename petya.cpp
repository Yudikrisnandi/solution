#include <bits/stdc++.h>

using namespace std;

int main(){
  string s1;
  cin >> s1;
  string s2;
  cin >> s2;
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  if(s1 == s2) {
    cout << 0 << endl;
  }else{
    for(int i = 0; i < s1.size(); i++) {
      if(s1[i] < s2[i]) {
        cout << -1 << endl;
        break;
      }
      if(s1[i] > s2[i]) {
        cout << 1 << endl;
        break;
      }
    }
  }
  return 0;
}


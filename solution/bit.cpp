#include <bits/stdc++.h>

using namespace std;

int main(){
  int x = 0;
  int n;
  string s;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> s;
    if(s[1] == '+'){
      x++;
    }else{
      x--;
    }
  }
  cout << x << endl;
  return 0;
}


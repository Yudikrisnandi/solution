/**
 *    author:  ykaka
 *    created: 02.08.2020 13:26:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
  long long n ;
  cin >> n;
  string s = to_string(n);
  int total = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '7'){
      total++;
    }else if(s[i] == '4'){
      total++;
    }
  }
  if(total == 4 || total == 7){
    cout << "YES" << endl;
  }else {
    cout << "NO" << endl;
  }
  return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, p, v, t;
  int total = 0;
  cin >> n;
  while(n--){
    cin >> p >> v >> t;
    if(p + v + t >= 2){
      total += 1;
    }
  }
  cout << total << endl;
  return 0;
}


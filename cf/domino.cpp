#include <bits/stdc++.h>

using namespace std;

int main(){
  int m, n;
  cin >> m >> n;
  int x = m / 2;
  int l = m % 2;
  int total = x * n;
  if(l != 0){
    int y = l * n;
    total = total + (y / 2);
  }
  cout << total << endl;
  return 0;
}


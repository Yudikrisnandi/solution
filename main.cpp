#include <bits/stdc++.h>       
using namespace std;


int main() {
  int *p;
  p = new int[3];
  p[0] = 1;
  p[1] = 2;
  p[2] = 3;
  for(int i = 0; i < 3; i++) {
    cout << p[i] << " " ;
  }
  cout << endl;
  delete []p;
  p = nullptr;
  return 0;
}

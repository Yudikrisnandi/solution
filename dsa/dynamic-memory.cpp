#include <bits/stdc++.h>
using namespace std;

int main(){
  int *p;
  p = new int[5];
  p[0] = 0; 
  p[1] = 2; 
  p[2] = 6;
  p[3] = 4; 
  p[4] = 9; 
  for(int i = 0; i < 5; i++){
    cout << p[i] << " ";
  }
  delete []p;
  p = nullptr;
  cout << endl;
  return 0;
}


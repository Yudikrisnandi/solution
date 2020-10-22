#include <bits/stdc++.h>
using namespace std;

int main(){
  int x = 10;
  int *p;
  p = &x;
  cout << "address of x " << p << endl;
  cout << "address of p " << &p << endl;
  cout << "data that point to *p " << *p << endl;
  return 0;
}

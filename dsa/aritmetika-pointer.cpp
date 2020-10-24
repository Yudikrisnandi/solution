#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[5] = {2, 4, 5, 6, 9};
  int *p = a;
  cout << p << "-->" << *p << endl;
  p++;
  cout << p << "-->" << *p << endl;
  p++;
  p--;
  cout << p << "-->" << *p << endl;
  p = p + 2;
  cout << p << "-->" << *p << endl;
  p = p - 3;
  cout << p << "-->" << *p << endl;
  int *q = &a[4];
  cout << q - p << endl;
  return 0;
}


#include <bits/stdc++.h>       
using namespace std;

struct Number {
  int x;
  int y;
  int display(){
    return x + y;
  }
};

int main() {
  Number num;
  num.x = 8;
  num.y= 7;
  cout << num.display() << endl;
  
  return 0;
}

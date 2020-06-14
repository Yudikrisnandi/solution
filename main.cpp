#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int x, y;
  x = 10;
  y = 20;
  swap(&x, &y);
  cout << x << "," << y << endl;
  int z = 15;
  if(z < 20)
    cout << "kurang";
  return 0;
}
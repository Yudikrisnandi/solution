/**
 *    author:  ykaka
 *    created: 27.09.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
typedef unsigned long long ull;

int countDigit(int x){
  int count = 0;
  while(x != 0){
    x = x / 10;
    ++ count;
  }
  return count;
}

int total(int x){
  int count = (x * ( 1 + x)) / 2;
  return count;
}

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  while(t--){
    int num;
    cin >> num;
    int n = countDigit(num);
    int m = num % 10;
    int x = m - 1;
    int jumlah = ( x * 10) + total(n);
    cout << jumlah << endl;
  }
  return 0;
}


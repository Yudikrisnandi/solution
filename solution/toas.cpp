/**
 *    author:  ykaka
 *    created: 12.08.2020 18:04:18       
**/
 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int a = (k * l) / n;
  int b = (l * c);
  int e = p / np;
  int arr[2] = {b, e};
  int ans = a;
  for(int i = 0; i < 2; i++){
    if(arr[i] < ans) ans = arr[i];
  }
  cout << ans / n << endl;
  return 0;
}


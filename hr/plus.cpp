/**
 *    author:  ykaka
 *    created: 27.09.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
typedef unsigned long long ull;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int n;
  cin >> n;
  int arr[100];
  float p, m, ne = 0;
  rep(i, n){
    cin >> arr[i];
    if(arr[i] > 0) p++;
    if(arr[i] == 0) ne++;
    if(arr[i] < 0) m++;
  }
  cout << p / n << endl;
  cout << m / n << endl;
  cout << ne / n << endl;
  return 0;
}


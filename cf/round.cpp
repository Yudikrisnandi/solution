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
  int n, k;
  cin >> n >> k;
  int i;
  vector<int> v;
  while(cin >> i){
    v.push_back(i);
  }
  int count = 0;
  rep(i,n){
    if(v[i] > 0 && v[i] >= v[k-1])
      count++;
  }
  cout << count << endl;
  return 0;
}


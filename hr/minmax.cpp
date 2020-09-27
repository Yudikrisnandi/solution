/**
 *    author:  ykaka
 *    created: 27.09.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
#define pb push_back
using namespace std;
typedef unsigned long long ull;

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int n = 5;
  int total = 0;
  vector<int> v;
  while(n--){
    int x;
    cin >> x;
    v.pb(x);
    total += x;
  }
  sort(v.begin(), v.end());
  cout << total - v[4] << " " << total - v[0] << endl;
  return 0;
}


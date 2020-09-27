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
  int p;
  cin >> p;
  vector<int> v;
  for(int i = 0; i < p; i++){
    int a;
    cin >> a;
    v.push_back(a);
  }

  int q;
  cin >> q;
  for(int i = 0; i < q; i++){
    int b;
    cin >> b;
    v.push_back(b);
  }
  sort(v.begin(), v.end());
  int count = 0;
  for(int i = 0; i < v.size(); i++){
    if(v[i] != v[i+1])
      count++;
  }
  string ans = "Oh, my keyboard!";
  if(count == n){
    ans = "I become the guy.";
  }
  cout << ans << endl;
  return 0;
}


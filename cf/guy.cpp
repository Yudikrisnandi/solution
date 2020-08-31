/**
 *    author:  ykaka
 *    created: 07.08.2020 18:26:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
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


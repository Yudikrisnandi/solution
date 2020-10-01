/**
 *    author:  ykaka
 *    created: 27.09.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
typedef unsigned long long ull;

void solve(vector<int> a, vector<int>b){
  int res[2] = {0};
  int n = a.size();
  rep(i,n){
    if(a[i] > b[i]){
     res[0]++;
    } 
    if(a[i] < b[i]){
     res[1]++;
    } 
  }
  cout << res[0] << " " << res[1] << endl;
}

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int n = 3;
  vector<int>a;
  vector<int>b;
  rep(i,n){
    int x;
    cin >> x;
    a.push_back(x);
  }
  rep(i,n){
    int x;
    cin >> x;
    b.push_back(x);
  }
  solve(a, b);
  return 0;
}


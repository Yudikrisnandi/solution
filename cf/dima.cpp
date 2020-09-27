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
  vector<int> v;
  int x;
  for(int i = 0; i < n; i++){
    cin >> x;
    v.push_back(x);
  }
  int s = 0;
  int d = 0;
  int i = 0;
  int j = n - 1;
  bool sereja = true;
  while(i <= j){
    if(sereja){
      if(v[i] > v[j]){
        s += v[i];
        i++;
        sereja = false;
      }else{
        s += v[j];
        j--;
        sereja = false;
      }
    }else{
      if(v[i] > v[j]){
        d += v[i];
        i++;
        sereja = true;
      }else{
        d += v[j];
        j--;
        sereja = true;
      }
    }
  }
  cout << s << " " << d << endl;
  return 0;
}


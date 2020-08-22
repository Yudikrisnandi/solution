/**
 *    author:  ykaka
 *    created: 09.08.2020 18:04:18       
**/
 
#include <bits/stdc++.h>
using namespace std;


int main(){
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


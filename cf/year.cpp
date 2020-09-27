/**
 *    author:  ykaka
 *    created: 27.09.2020 20:54:48       
**/
 
#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i<(n);++i)
using namespace std;
typedef unsigned long long ull;

bool isUnique(int y){
  map<int, int>m;
  bool res = false;
  while(y > 0){
    int d = y % 10;
    m[d] = m[d] + 1;
    y = y / 10;
  }
  if(m.size() == 4){
    res = true;
  }
  return res;
}

int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int year;
  cin >> year;
  year++;
  bool find = true;
  int h;
  while(find){
    bool is = isUnique(year);
    if(is){
      h = year;
      find = false;
    }
    year++;
  }
  cout << h << endl;
  return 0;
}


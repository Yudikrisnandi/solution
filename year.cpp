/**
 *  author:  ykaka
 *  created: 03.08.2020 07:26:48       
**/
 
#include <bits/stdc++.h>
using namespace std;
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



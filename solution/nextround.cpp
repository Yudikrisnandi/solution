#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int i;
  vector<int> v;
  while(cin >> i){
    v.push_back(i);
  }
  int count = 0;
  for(int i = 0; i < n; i++){
    if(v[i] > 0 && v[i] >= v[k-1]) 
      count++;
  }
   cout << count << endl;
  return 0;
}


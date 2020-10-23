#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;

void display(vector<int>v){
  int len = v.size();
  rep(i, len){
    cout << v[i] << " ";
  }
}

int main(){
  vector<int> v;
  int x;
  while(cin >> x){
    v.push_back(x);
  }
  int len = v.size(); 
  int counter = 0;
  rep(i,len){
    rep(j,len - 1){
      if(v[j] > v[j+1]){
        swap(v[j], v[j+1]);
        counter++;
        cout << counter << ". [" << v[j] << "," << v[j+1] << "] -> ";
        display(v);
        cout << endl;
      }
    }
  }
  cout << "Jumlah swap: " << counter <<endl;
  return 0;
}

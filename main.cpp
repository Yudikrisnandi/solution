#include <bits/stdc++.h>       
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int len, data; 
    cin >> len;
    vector<int> v;
    for(int i = 0; i < len; i++){
        cin >> data;
        v.push_back(data);
    }
    int q, val;
    cin >> q;

    for(int i = 0; i < q; i++){
      cin >> val;
      vector<int>::iterator low;
      low = lower_bound(v.begin(), v.end(), val);
      if (v[low - v.begin()] == val)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
    }
    return 0;
}

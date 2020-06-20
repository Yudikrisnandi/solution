#include <bits/stdc++.h>       
using namespace std;


int main() {
    int x = 10;
    int y = 12;
    int *ptr = &x;
    ptr = &y;
    cout << *ptr << endl;
    return 0;
}

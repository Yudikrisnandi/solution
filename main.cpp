#include <bits/stdc++.h>       
using namespace std;


int main() {
    int x = 10;
    int *ptr = &x;
    ++*ptr;
    cout << *ptr << endl;
    cout << x << endl;
    return 0;
}

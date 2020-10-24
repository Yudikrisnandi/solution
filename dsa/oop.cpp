#include <bits/stdc++.h>
using namespace std;

class Rectangle {
  private:
    length;
    breath;
  public:
    Rectangle();
    Rectangle(int l, int b);
    void setLength(int x);
    void setBreath(int x);
    int getLength();
    int getBreath();
    int perimeter();
    ~Reactangle();
}

int Reactangle::perimeter(){
  return length * breath;
}

int main() {
  Reactangle r(4, 5);
  cout << r.perimeter() << endl;
  return 0;
}


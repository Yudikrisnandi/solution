#include <bits/stdc++.h>       
using namespace std;

class Rectangle {
  public:
    int length;
    int breadth;

    int area() {
      return length * breadth;
    }

    int perimeter() {
      return 2 * (length + breadth);
    }
};

int main() {
  Rectangle a;
  a.length = 4;
  a.breadth = 5;

  cout << "area : " << a.area() << endl;
  cout << "perimeter : " << a.perimeter() << endl;
}

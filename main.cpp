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
  Rectangle *ptr;
  ptr = &a;
  ptr -> length = 3;
  ptr -> breadth = 4;

  cout << "area : " << ptr -> area() << endl;
  cout << "perimeter : " << ptr -> perimeter() << endl;
}

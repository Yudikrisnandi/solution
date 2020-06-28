#include <bits/stdc++.h>       
using namespace std;

class Rectangle {
  private:
    int length;
    int breadth;
  public:
    Rectangle(int l = 0,int b = 0){
      length = l;
      breadth = b;
    }
    int getLength(){
      return length;
    }
    int getBreadth(){
      return breadth;
    }
    void setLength(int l){
      length = l;
    }
    void setBreadth(int b){
      breadth = b;
    }
    int area() {
      return length * breadth;
    }

    int perimeter() {
      return 2 * (length + breadth);
    }
};

int main() {
  Rectangle *ptr = new Rectangle;
  ptr -> setLength(3);
  ptr -> setBreadth(4);

  cout << "area : " << ptr -> area() << endl;
  cout << "perimeter : " << ptr -> perimeter() << endl;
}

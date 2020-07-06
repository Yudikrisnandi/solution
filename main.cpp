#include <bits/stdc++.h>       
using namespace std;

struct Node {
  int data;
  Node *next;
};

Node *head = NULL;


int main() {
  Node *ptr = new Node();
  ptr -> data = 1;
  ptr -> next = NULL;
  head = ptr;
  return 0;
}

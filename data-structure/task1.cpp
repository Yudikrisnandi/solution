/**
 *    author:  ykaka
 *    created: 15.10.2020 09:54:48       
**/
 
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int value;
    Node *next;
};

class LinkedList{
  private:
    Node *head, *tail;
  public:
    LinkedList(){
      head = NULL;
      tail = NULL;
    }
    void insertNode(int n){
      Node *tmp = new Node;
      tmp->value = n;
      tmp->next = NULL;
      if(head == NULL){
        head = tmp;
        tail = tmp;
      }else{
        tail->next = tmp;
        tail = tail->next;
      }
    }
    void display(){
      Node *p=head;
      while(p){
        cout << p->value << " ";
        p=p->next;
      }
      cout << endl;
    }
    int length(){
      Node *p=head;
      int len = 0;
      while(p){
        len++;
        p=p->next;
      }
      return len;
    }
};


int main(){
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  LinkedList l;
  int x;
  while(cin >> x){
    l.insertNode(x);
  }
  int len = l.length();
  cout << len << endl;
  return 0;
}


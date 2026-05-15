#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int value) {
    data = value;
    next = NULL;
  }
};

class LinkedList {
private:
  Node *head;

public:
  LinkedList() { head = NULL; }

  void insert(int value) {
    Node *newNode = new Node(value);

    if (head == NULL) {
      head = newNode;
      return;
    }

    Node *temp = head;

    while (temp->next != NULL) {
      temp = temp->next;
    }

    temp->next = newNode;
  }

  void display() {
    Node *temp = head;

    while (temp != NULL) {
      cout << temp->data << " -> ";
      temp = temp->next;
    }

    cout << "NULL" << endl;
  }

  void deleteNode(int value) {
    if (head == NULL)
      return;

    if (head->data == value) {
      Node *temp = head;
      head = head->next;
      delete temp;
      return;
    }

    Node *temp = head;

    while (temp->next != NULL && temp->next->data != value) {
      temp = temp->next;
    }

    if (temp->next == NULL)
      return;

    Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;

    delete nodeToDelete;
  }
};

int main() {

  LinkedList list;

  list.insert(10);
  list.insert(20);
  list.insert(30);
  list.insert(40);

  cout << "Linked List:" << endl;
  list.display();

  list.deleteNode(30);

  cout << "After Deletion:" << endl;
  list.display();

  return 0;
}
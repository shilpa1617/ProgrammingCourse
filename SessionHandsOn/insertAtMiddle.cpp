#include <iostream>
using namespace std;

struct Node
{
 int data;
 struct Node *next;
};
struct Node *insertionAtTail(struct Node *head)
{
 struct Node *newNode = new Node();
 int number;
 cin >> number;
 newNode->data = number;
 newNode->next = NULL;
 struct Node *temp = head;
 if (head == NULL)
 {
  head = newNode;
 }
 else
 {
  while (temp->next != NULL)
  {
   temp = temp->next;
  }
  temp->next = newNode;
 }

 return head;
}
struct Node *display(struct Node *head)
{
 struct Node *temp = head;
 while (temp != NULL)
 {
  cout <<  "    "<<temp->data << "   ";
  temp = temp->next;
 }
 cout<<endl;
}

struct Node *insertionAtMiddle(struct Node *head)
{
 if (head == NULL)
 {
  cout << "Head is NULL" << endl;
 }
 else if (head->next == NULL)
 {
  cout << "Only one Element is there" << endl;
 }
 else
 {
  int size = 0;

  struct Node *temp = head;

  while (temp != NULL)
  {
   size++;
   temp = temp->next;
  }
  cout << "Size is " << size << endl;

  int middle = size / 2;
  temp = head;
  int count = 0;
  while (count < middle - 1)
  {
   count++;
   temp = temp->next;
  }
  struct Node *newnode = new Node();
  int number;
  cin >> number;
  newnode->data = number;
  newnode->next = temp->next;
  temp->next = newnode;
 }
}

int main()
{
 struct Node *head = NULL;
 head = insertionAtTail(head);
 head = insertionAtTail(head);
 head = insertionAtTail(head);
 display(head);
 //cout << "head value :" << head->data << endl;

 insertionAtMiddle(head);
 
 display(head);
  
  
}
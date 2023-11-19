#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *insertionAtHead(struct Node *head)
{
    struct Node *newNode = new Node();
    int number;
    cin >> number;
    newNode->data = number;
    if (head == NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        newNode->next = head;
    }
    head = newNode;
    return head;
}
struct Node *display(struct Node *head)
{
    struct Node *temp = head;
    cout<<"Elemets are :";
    while (temp != NULL)
    {
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    struct Node *head = NULL;
    head = insertionAtHead(head);
    head = insertionAtHead(head);
    head = insertionAtHead(head);
    head = insertionAtHead(head);
    head = insertionAtHead(head);
    display(head);
    // cout << "head value :" << head->data << endl;
}
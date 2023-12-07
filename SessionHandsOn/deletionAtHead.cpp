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
    cout <<"The elemets are :";
    while (temp != NULL)
    {
        cout <<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
struct Node *deletionAtHead(struct Node *head)
{
    if (head == NULL)
    {
        cout << "There is no elements to delete"<<endl;
    }
    else
    {
        struct Node *temp=head;
        head = head->next;
        delete(temp);
    }
    return head;
}

int main()
{
    struct Node *head = NULL;
    head = insertionAtHead(head);
    head = insertionAtHead(head);
    head = insertionAtHead(head);
    display(head);
    head = deletionAtHead(head);
    display(head);
    // cout << "head value :" << head->data << endl;
}
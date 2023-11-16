// insertionAtTail
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
struct Node *display(struct Node *head){
    struct Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
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
}
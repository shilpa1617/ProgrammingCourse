#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *insertionAtMiddle(struct Node *head)
{
    if (head == NULL)
    {
        cout << "Head is NULL" << endl;
    }
    else if (head->next == NULL)
    {
        cout << "One element is present " << endl;
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
        cout<<"size is "<<size<<endl;
        int middle = size / 2;
        temp = head;
        int count = 0;

        while (count < middle - 1)
        {
            count++;
            temp = temp->next;
        }
        struct Node *newnode = new Node();
        int data;
        cin >> data;
        newnode->data = data;
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}
void *display(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
struct Node *insertionAtHead(struct Node *head){
    struct Node *newnode=new Node();
    int data;
    cin>>data;
    newnode->data=data;
    if(head==NULL){
        newnode->next=NULL;
    }
    else{
        newnode->next=head;
    }
    head=newnode;
    return head;
}
struct Node *insertionAtTail(struct Node *head){
    struct Node *newnode=new Node();
    int data;
    cin>>data;
    newnode->data=data;
    if(head==NULL){
        head=newnode;
    }
    else{
        struct Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    return head;
}
int main()
{
    struct Node *head = NULL;
    head=insertionAtHead(head);
    head=insertionAtHead(head);
    display(head);
    head = insertionAtMiddle(head);
    head = insertionAtMiddle(head);
    head = insertionAtMiddle(head);
    display(head);
    head=insertionAtTail(head);
    head=insertionAtTail(head);
    display(head);
    return 0;
}
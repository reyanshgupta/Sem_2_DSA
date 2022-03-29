#include <iostream>
using namespace std;
 

struct Node
{
    int data;
    Node *next;
};
 

void StartInsert(Node** head, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head);
 
    (*head) = new_node;
}
 

void insertAfter(Node* prev_node, int new_data)
{
   
    if (prev_node == NULL)
    {
        cout<<"There is no node to insert after. ";
        return;
    }
 
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
 

void EndInsert(Node** head_ref, int new_data)
{
    Node* temp = *head_ref;
    Node* new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
 
   
    while (last->next != NULL)
    {
        last = last->next;
    }
 
    
    last->next = new_node;
    return;
}


void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

int main()
{
    int val1,val2,prevnode, val3,position,pos;
    Node* head = NULL;
    //insertion
    cout << "Enter value to be inserted at the end: "<<endl;
    cin>>val1;
    EndInsert(&head,val1);
    cout<<"Created Linked list after inserted at the end is: "<<endl;
    printList(head);
    cout << endl;
    cout << "Enter value to be inserted at the front: "<<endl;
    cin >> val2;
    StartInsert(&head, val2);
    cout<<"Created Linked list after inserted at the front is: "<<endl;
    printList(head);
    cout << endl;
    cout << "Enter Prev Node and value to be added: "<<endl;
    cin >> prevnode >> val3;
    insertAfter(head->next, val3);
    cout<<"Created Linked list is: "<<endl;
    printList(head);
    cout << endl;

    return 0;
}

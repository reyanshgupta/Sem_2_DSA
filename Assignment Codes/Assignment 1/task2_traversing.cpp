#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
struct LinkedList {
    Node* head;
    LinkedList() { head = NULL; }

    void reverse()
    {
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
 
int main()
{
    LinkedList ll;
    ll.push(40);
    ll.push(30);
    ll.push(20);
    ll.push(10);
 
    cout << "Given linked list: "<<endl;
    ll.print();
 
    ll.reverse();
 
    cout << "\nReversed Linked list: "<<endl;
    ll.print();
    cout << "\nTime Complexity: O(n) \nSpace Complexity: O(1) ";
    return 0;
}
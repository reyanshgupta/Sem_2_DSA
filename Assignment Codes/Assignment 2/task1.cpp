#include<iostream>
using namespace std;

struct node{
   int data;
   struct node *left, *right;
}*ptr = NULL;

struct node* newnode(int data) {
   ptr = new node;
   ptr->data= data;
   ptr->left = ptr->right = NULL;
   return(ptr);
}
struct node *LCA(struct node* root, int n1, int n2) {
   if (root == NULL)
      return NULL;
   if (root->data > n1 && root->data > n2)
      return LCA(root->left, n1, n2);
   if (root->data< n1 && root->data < n2)
      return LCA(root->right, n1, n2);
      return root;
}
int main() {
   node* root = newnode(10);
   root->left = newnode(8);
   root->right = newnode(20);
   root->left->right = newnode(9);
   root->right->left= newnode(15);
   root->right->right = newnode(30);
   root->right->left->left = newnode(12);
   root->right->left->right = newnode(17);
   int n1,n2;
   cout<<"Enter n1 and n2: ";
   cin>>n1>>n2;
   struct node *t = LCA(root, n1, n2);
   t = LCA(root, n1, n2);
   cout<<"Lowest Common Ancestor of "<<n1<<" and "<<n2<<" is: " <<t->data<<endl;

}
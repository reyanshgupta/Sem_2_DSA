#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node* left;
	node* right;
	node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

int isBSTUtil(node* node, int min, int max);
int isBST(node* node)
{
	return(isBSTUtil(node, INT_MIN, INT_MAX));
}

int isBSTUtil(node* node, int min, int max)
{

	if (node==NULL)
		return 1;

	if (node->data < min || node->data > max)
		return 0;

	return
		isBSTUtil(node->left, min, node->data-1) && 
		isBSTUtil(node->right, node->data+1, max); 
}

int main()
{
    node *root = new node(2);
    root->left = new node(1);
    root->right = new node(6);
    root->left->left = new node(9);
    root->left->right = new node(8);
     
    if(isBST(root))
        cout<<"Given tree is BST";
    else
        cout<<"Given tree is not a BST";
         
    return 0;
} 

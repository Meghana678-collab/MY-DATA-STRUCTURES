#include<stdio.h>
#include<stdlib.h>
// create a node using struct and create a tree using a pointer
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

int main()
{  // assign memeory
    struct node* root=malloc(sizeof(struct node));
    struct node* leftchild=malloc(sizeof(struct node));
    struct node* rightchild =malloc(sizeof(struct node));
    // assign value to root , left ,right child
    root->data=1;
    leftchild->data=2;
    rightchild->data=3;
    root->left=leftchild;
    root->right=rightchild;
    // since there is no child for leftchild of root , rightchild of root we assign NULL (leaf)
    leftchild->left=leftchild->right=NULL;
    rightchild->left=rightchild->right=NULL;
    // printing the value 
    printf("Root=%d\n",root->data);
    printf("left child=%d\n", leftchild->data);
    printf("right child=%d\n",rightchild->data);
    return 0;
    
}

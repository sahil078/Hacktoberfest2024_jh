#include<stdio.h>
#include<malloc.h>
struct node{
int data;
struct node *left;
struct node *right;
};
void insertionLeft(struct node* insertLeft)
{
struct node* new;
new = (struct node*)malloc(sizeof(struct node));
new->left=NULL;
new->right=NULL;
printf("Enter an element: ");
scanf("%d",&new->data);
insertLeft->left = new;
return;
}
void insertionRight(struct node* insertRight)
{
struct node* new;
new = (struct node*)malloc(sizeof(struct node));
new->left=NULL;
new->right=NULL;
printf("Enter an element: ");
scanf("%d",&new->data);
insertRight->right = new;
return;
}
void Inorder(struct node* print)
{
if(print!=NULL)
{
Inorder(print->left);
printf("%d ",print->data);
Inorder(print->right);
}
}
void mirrorImage(struct node* twist)
{
if(twist==NULL)
{
return;
}
struct node* temp;
mirrorImage(twist->left);
mirrorImage(twist->right);
temp=twist->left;
twist->left=twist->right;
twist->right=temp;
}
int main(){
struct node* root;
root = (struct node*)malloc(sizeof(struct node)); 
printf("Enter an element: ");
scanf("%d",&root->data);
insertionLeft(root);
insertionRight(root);
insertionLeft(root->left);
insertionRight(root->left);
insertionLeft(root->right);
insertionRight(root->right);
insertionLeft(root->left->left);
insertionRight(root->left->left);
insertionLeft(root->left->right);
insertionRight(root->left->right);
insertionLeft(root->right->left);
insertionRight(root->right->left);
insertionLeft(root->right->right);
insertionRight(root->right->right);
printf("Real Image: ");
Inorder(root);
mirrorImage(root);
printf("\nMirror Image: ");
Inorder(root);
return 0 ;
}
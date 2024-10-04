#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node* leftchild;
    struct node* rightchild;
};

void insertLeft(struct node* leftroot)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter an element: ");
    scanf("%d",&newnode->data);
    newnode->leftchild = NULL;
    newnode->rightchild = NULL;
    leftroot->leftchild = newnode;
}

void insertRight(struct node* rightroot)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter an element: ");
    scanf("%d",&newnode->data);
    newnode->leftchild = NULL;
    newnode->rightchild = NULL;
    rightroot->rightchild = newnode;
}

void Inorder(struct node* printRoot)
{
    if(printRoot==NULL)
    {
        return;
    }
    Inorder(printRoot->leftchild);
    printf("%d ",printRoot->data);
    Inorder(printRoot->rightchild);
}

int Height(struct node *heightroot)
{
    int x = 0, y = 0;
    if(heightroot==NULL)
    {
        return 0;
    }
    x = Height(heightroot->leftchild);
    y = Height(heightroot->rightchild);
    if(x>y)
    {
        return x+1;
    }
    else
    {
        return y+1;
    }
}


int main(){
    struct node* root;
    int height;
    root = (struct node*)malloc(sizeof(struct node));
    root->leftchild = NULL;
    root->rightchild = NULL;
    root->data = 10;
    insertLeft(root);
    insertRight(root);
    insertLeft(root->leftchild);
    insertRight(root->leftchild);
    insertLeft(root->rightchild);
    insertRight(root->rightchild);
    Inorder(root);
    height = Height(root);
    printf("Height of Tree is: %d",height);
    return 0;
}
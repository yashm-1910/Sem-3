//Write a C program to create a binary search tree and display using inorder traversal.

#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node * left;
    struct node * right;
};

struct node * tree = NULL;

void inOrder(struct node * tree);
struct node * insert(struct node * tree);

int main(){

    int ch;
    do
    {
        printf("\nMAIN MENU:");
        printf("\nEnter 1 for Insert.");
        printf("\nEnter 2 for inorder traversal.");
        printf("\nEnter 3 for exit.");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            tree=insert(tree);
            break;
        case 2:
            printf("\nDisplaying tree: \n");
            inOrder(tree);
            break;
        case 3:
            printf("Exitting!");
            break;
        default:
            break;
        }
    } while (ch!=3);
    return 0;
}

void inOrder(struct node * tree){
    if (tree != NULL)
    {
        inOrder(tree->left);
        printf("%d\t",tree->data);
        inOrder(tree->right);
    }
}

struct node * insert(struct node * tree){

    int val;
    printf("\nEnter the value to be inserted in the tree: ");
    scanf("%d",&val);

    struct node *new_node, *ptr, *parent;

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->left=NULL;
    new_node->right=NULL;

    if (tree==NULL)
    {
        tree=new_node;
    }
    else
    {
        parent = NULL;
        ptr = tree;
        while (ptr!=NULL)
        {
            parent = ptr;
            if(val<ptr->data){
                ptr=ptr->left;
            }
            else{
                ptr=ptr->right;
            }
        }
        if (val<parent->data)
        {
            parent->left=new_node;
        }
        else{
            parent->right=new_node;
        }
    }
    printf("\nDisplaying tree: ");
    inOrder(tree);
    return tree;
}
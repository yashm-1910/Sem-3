#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};
struct node * tree = NULL;
void create_tree(struct node * tree);
void inorder(struct node * tree);
struct node * insert(struct node * tree);

int main(){
    int ch;
    do
    {
        printf("\n1 for insert");
        printf("\n2 for display");
        printf("\n3 for Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            tree = insert(tree);
            inorder(tree);
            break;
        case 2:
            printf("\nDisplaying tree: ");
            inorder(tree);
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


void inorder(struct node * tree){
    if (tree!=NULL)
    {
        inorder(tree->left);
        printf("%d\t",tree->data);
        inorder(tree->right);
    }
}

struct node * insert(struct node * tree){
    
    int val;
    printf("\nEnter the value to be inserted: ");
    scanf("%d",&val);

    struct node *new_node, *ptr, *parent;
    new_node= (struct node*)malloc(sizeof(struct node));
    
    new_node->data = val;
    new_node->left=NULL;
    new_node->right=NULL;

    if (tree == NULL)
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
            parent->left = new_node;
        }
        else{
            parent->right = new_node;
        }
    }
    return tree;
}
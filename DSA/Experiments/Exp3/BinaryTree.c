#include<stdio.h>
#include<malloc.h>

struct node{

    int data;
    struct node * left;
    struct node * right;
};

struct node * tree;
void create_tree(struct node * tree);
struct node * insert(struct node * tree, int value);
struct node * delete(struct node * tree, int value);
void inOrderTraversal(struct node * tree);
int totalNodes(struct node * tree);
int leafNodes(struct node * tree);


int main(){

    int num,value;

    create_tree(tree);
    do
    {
        printf("\nEnter 1 to insert in tree");
        printf("\nEnter 2 to delete a node in tree");
        printf("\nEnter 3 to display (inorder) in tree");
        printf("\nEnter 4 to find total nodes in tree");
        printf("\nEnter 5 to find total leaf nodes in tree");
        printf("\nEnter 6 to exit");
        printf("\nEnter your choice:");
        scanf("%d",&num);
        switch (num)
        {
        case 1:
            printf("\n Enter the value of the new node : ");
            scanf("%d", &value);
            tree = insert(tree, value);
            break;
        case 2:
            printf("\n Enter the element to be deleted : ");
            
            scanf("%d", &value);
            tree = delete(tree, value);
            break;
        case 3:
            printf("\n The elements of the tree are : \n");
            inOrderTraversal(tree);
            break;
        case 4:
            printf("\n Total no. of nodes = %d", totalNodes(tree));
            break;
        case 5:
            printf("\n Total no. of external nodes = %d",leafNodes(tree));
            break;
        
        default:
            break;
        }
    } while (num<6);
    
    
    return 0;
}

void create_tree(struct node *tree)
{
    tree = NULL;
}

struct node * insert(struct node * tree, int value){

    struct node *ptr, *nodeptr, *parentptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = value;
    ptr->left = NULL;
    ptr->right = NULL;
    
    if (tree == NULL)
    {
        tree = ptr;
    }
    else
    {
        parentptr=NULL;
        nodeptr=tree;
        while(nodeptr!=NULL)
        {
            parentptr=nodeptr;
            if(value< nodeptr->data)
                nodeptr=nodeptr->left;
            else
                nodeptr = nodeptr->right;
        }
        if(value<parentptr->data)
            parentptr->left = ptr;
        else
        parentptr->right = ptr;
    }
    inOrderTraversal(tree);
    return tree;
    
}

void inOrderTraversal(struct node *tree)
{
    if(tree != NULL)
    {
        inOrderTraversal(tree->left);
        printf("%d\t", tree->data);
        inOrderTraversal(tree->right);
    }

}

int totalNodes(struct node * tree){
    if(tree == NULL){
        return 0;
    }
    else
    {
        return totalNodes(tree->right)+totalNodes(tree->left)+1;
    }
    
}
int leafNodes(struct node * tree){

    if(tree==NULL){
        return 0;
    }
    else if((tree->left==NULL) && (tree->right==NULL)){
    return 1;
    }
    else
    return (leafNodes(tree->left) + leafNodes(tree->right));
}

struct node *delete(struct node *tree, int val)
{
    struct node * ptr, *current, *temp;

    //To check if tree is null or not
    if (tree==NULL)
    {
        printf("\nThe Tree is empty.");
        return tree;
    }

    //To check if the value to be deleted exists in the tree
    current = tree;
    while(current!=NULL && val!= current->data)
    {
        current = (val<current->data)? current->left:current->right;
    }
    if(current == NULL)
    {
        printf("\n The value to be deleted is not present in the tree");
        return(tree);
    }
    //Recursive call to delete function
    //If val<data then delete left subtree
    if (val < tree->data) 
    {
        tree->left = delete(tree->left, val);
    }
    //If val>data then delete left subtree 
    else if (val > tree->data) 
    {
        tree->right = delete(tree->right, val);
    }
    else
    { 
        // node with only one child or no child 
        if (tree->left == NULL) 
        { 
            temp = tree->right; 
            free(tree); 
            return temp; 
        } 
        else if (tree->right == NULL) 
        { 
            temp = tree->left; 
            free(tree); 
            return temp; 
        } 
        //To find inorder Sucessor
        ptr = tree->right;
        while (ptr && ptr->left != NULL) 
            ptr = ptr->left; 
        temp = ptr;
        tree->data = temp->data;
        tree->right = delete(tree->right, temp->data);
    }
    return tree;
}

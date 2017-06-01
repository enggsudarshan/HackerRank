/* Binary Tree */

#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *add_data();
struct Node *create_node(int n);
void Infix(struct Node *t);
void LeftView(struct Node *root);
void LeftViewPrint(struct Node *root, int level, int *max_level);

struct Node *create_node(int n)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->data = n;
    t->left = NULL;
    t->right = NULL;

    return t;
};

struct Node *add_data()
{
    int n;
    struct Node *node;
    printf("Enter the node value:\n");
    scanf("%d",&n);
    if(n == -1)
        return NULL;

    node = create_node(n);
    printf("For left child of %d ",n);
    node->left = add_data();

    printf("For right child of %d ",n);
    node->right = add_data();

    return node;
};

void LeftViewPrint(struct Node *root, int level, int *max_level)
{
    if (root == NULL)
        return;

    if(*max_level < level)
    {
        printf("%d ",root->data);
        *max_level = level;
    }

    LeftViewPrint(root->left,level+1,max_level);
    LeftViewPrint(root->right,level+1,max_level);
}

void LeftView(struct Node *root)
{
    int max_level=0;
    LeftViewPrint(root,1,&max_level);
}

void Infix(struct Node *t)
{
    if(t!=NULL)
    {
        Infix(t->left);
        printf("%d ",t->data);
        Infix(t->right);
    }
}

int main()
{
    struct Node *root;
    root = add_data();
    //Infix(root);
    LeftView(root);
    return 0;
}

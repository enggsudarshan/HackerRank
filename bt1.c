#include<stdio.h>
#include<stdlib.h>

struct BTree
{
    int data;
    struct BTree *left;
    struct BTree *right;
};

struct BTree *add_tree();
struct Btree *create_node(int n);
void Inorder_Print_Tree(struct BTree *t);
void Preorder_Print_Tree(struct BTree *t);
void PostOrder_Print_Tree(struct BTree *t);

struct Btree *create_node(int n)
{
    struct BTree *p = (struct BTree*)malloc(sizeof(struct BTree));
    p->data = n;
    p->left = NULL;
    p->right = NULL;

    return p;
}

struct BTree *add_tree()
{
    int n;
    struct BTree *node;
    printf("Enter the Node\n");
    scanf("%d",&n);
    if(n == -1)
        return NULL;
    node = create_node(n);
    printf("Enter the left child for %d\n",n);
    node->left = add_tree();

    printf("Enter the right child for %d\n",n);
    node->right = add_tree();

    return node;

}

void Inorder_Print_Tree(struct BTree *t)
{
    if(t!=NULL)
    {
        Inorder_Print_Tree(t->left);
        printf("%d ",t->data);
        Inorder_Print_Tree(t->right);
    }
}

void Preorder_Print_Tree(struct BTree *t)
{
    if(t!=NULL)
    {
        printf("%d ",t->data);
        Preorder_Print_Tree(t->left);
        Preorder_Print_Tree(t->right);
    }
}

void PostOrder_Print_Tree(struct BTree *t)
{
    if(t!=NULL)
    {
        PostOrder_Print_Tree(t->left);
        PostOrder_Print_Tree(t->right);
        printf("%d ",t->data);
    }
}

int main()
{
    int choice;
    struct BTree *tree;
    tree = add_tree();
    printf("Enter type of Traversal:\n");
    printf("1.Inorder\n2.PreOrder\n3.PostOrder\n");
    scanf("%d",&choice);

        switch(choice)
        {
            case 1: Inorder_Print_Tree(tree);
                    break;

            case 2: Preorder_Print_Tree(tree);
                    break;

            case 3: PostOrder_Print_Tree(tree);
                    break;
            default: exit(0);
        }
    return 0;
}

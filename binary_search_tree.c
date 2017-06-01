/* BST */
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *create_data(int data);
struct Node *add_data(struct Node *root,int key);
void Inorder(struct Node *t);
struct Node *search_data(struct Node *root, int key);
struct Node *min_value(struct Node *root);
struct Node *max_value(struct Node *root);

struct Node *delete_data(struct Node *root, int key);

struct Node *create_data(int data)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->data = data;
    t->left = NULL;
    t->right = NULL;

    return t;
};

struct Node *add_data(struct Node *root,int key)
{
    if(root == NULL)
        return create_data(key);

    if(key < root->data)
        root->left = add_data(root->left,key);
    else if(key > root->data)
        root->right = add_data(root->right,key);

    return root;
};

struct Node *search_data(struct Node *root, int key)
{
    if(root == NULL)
        return NULL;
    if(root->data == key)
        return root;

    if(key < root->data)
        return search_data(root->left,key);

    return search_data(root->right,key);


};

struct Node *min_value(struct Node *root)
{
    while(root->left !=NULL)
        root = root->left;

    return root;
};

struct Node *max_value(struct Node *root)
{
    while(root->right !=NULL)
        root = root->right;

    return root;
};

struct Node *delete_data(struct Node *root, int key)
{
    if(root == NULL)
        return root;

    if(key < root->data)
        root->left = delete_data(root->left,key);

    else if(key > root->data)
        root->right = delete_data(root->right,key);
    else
    {
        if(root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }

        if(root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        struct Node *temp = min_value(root->right);

        root->data = temp->data;

        root->right = delete_data(root->right,temp->data);
    }

    return root;

};
void Inorder(struct Node *t)
{
    if(t!=NULL)
    {
        Inorder(t->left);
        printf("%d ",t->data);
        Inorder(t->right);
    }
}
int main()
{
    int n;
    int ch;
    struct Node *root = NULL;
    printf("Enter root Node:\n");
    scanf("%d",&n);
    root = add_data(root,n);

    do
    {
        printf("1.Add Node\n2.Delete Node\n3.Search Node\n4.Find Min Value\n5.Find Max Value\n6.Print\n");
        printf("Enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter values:\n");
                    scanf("%d",&n);
                    if(n == -1)
                        break;
                    add_data(root,n);
                    break;
            case 2: printf("Enter Node to delete\n");
                    scanf("%d",&n);
                    root = delete_data(root,8);
                    break;
            case 3: printf("\nEnter search value:\n");
                    scanf("%d",&n);
                    if(n == -1)
                        break;
                    if(search_data(root,n) == NULL)
                    {
                        printf("\nElement %d not present\n",n);
                        break;
                    }

                    if(n == search_data(root,n)->data)
                        printf("\nElement %d present\n",n);
                    break;
            case 4: printf("Min value is %d\n",min_value(root)->data);
                    break;
            case 5: printf("Max value is %d\n",max_value(root)->data);
                    break;
            case 6: Inorder(root);
                    printf("\n");
                    break;
        }
    }while(ch!=7);


    free(root);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;
void add_node(int data,int pos);

void add_node(int data,int pos)
{
    int i;
    struct Node *tmp = (struct Node*)malloc(sizeof(struct Node));
    tmp->data = data;
    tmp->next = NULL;

    if(pos == 1)
    {
        tmp->next=head;
        head=tmp;
        return;
    }
    else
    {
        struct Node *tmp2 = head;
        for(i=0;i<pos-2;i++)
        {
            tmp2 = tmp2->next;
        }
        tmp->next = tmp2->next;
        tmp2->next = tmp;
    }
}

void Print(struct Node *head)
{

    while(head!=NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}
int main()
{
    int data,pos;
    char ch;
    head = NULL;
    printf("Enter the head Node:\n");
    scanf("%d",&data);
    add_node(data,1);
    do
    {
        printf("Enter the data and position:\n");
        scanf("%d %d",&data,&pos);
        add_node(data,pos);
        Print(head);
        printf("Do you want to continue?? Y:N\n");
        scanf("%s",&ch);
    }while(ch!='N');
    return 0;
}


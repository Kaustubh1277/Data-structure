#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct node{
int data;
struct node *link;
};
struct node *start=NULL;
void insertbeg();
void create();
void insertend();
void display();
void search();

void main()
{
    int ch;
    do{
    printf("\nMENU\n1 create\n2 Insert at Beginning\n3 Insert at End\n4 Search\n5 display\n6 Exit\nEnter Choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:create();break;
        case 2:insertbeg();break;
        case 3:insertend();break;
        case 4:search();break;
        case 5:display();break;
        case 6:break;
        default:printf("Wronng choice");

    }
    }while(ch!=6);
    printf("\nThank You");
}

void create()
{
    struct node *p,*n;
    char ch;
    n=(struct node *)malloc(sizeof(struct node *));
    printf("\nEnter data into node ");
    scanf("%d",&n->data);
    n->link=NULL;
    start=n;
    p=start;
    printf("\nAdd Another (y/n)");
    ch=getche();

    while(ch=='y' || ch=='Y')
    {
        n=(struct node *)malloc(sizeof(struct node *));
        printf("\nEnter Data to new node");
        scanf("%d",&n->data);
        n->link=NULL;
        p->link=n;
        p=n;
        printf("\nAdd Another (y/n)");
        ch=getche();
    }
}

void insertbeg()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node *));
    printf("\nEnter Data to new node");
    scanf("%d",&n->data);
    n->link=start;
    start=n;
}
void insertend()
{
    struct node *n,*p;
    p=start;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    n=(struct node *)malloc(sizeof(struct node *));
    printf("\nEnter Data to new node");
    scanf("%d",&n->data);
    p->link=n;
    n->link=NULL;
}
void display()
{
    struct node *n;
    n=start;
    while(n!=NULL)
    {
        printf("%d-->",n->data);
        n=n->link;
    }
}
void search()
{
    struct node *n;
    int item;
    printf("\nEnter the number to search");
    scanf("%d",item);
    n=start;
    while(n!=NULL)
    {
        if(n->data==item)
            break;
        else
            n=n->link;
    }
    if(n==NULL)
        printf("\nElement is not found");
    else
        printf("\nElement is found");
}

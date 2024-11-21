#include<stdio.h>
#include<malloc.h>
#include<conio.h>

struct node
{
    int coeff,exp;
    struct node *link;
};

struct node *create();
struct node *addition(struct node *,struct node*);
void display(struct node *);

void main()
{
    struct node *p1,*p2,*p3;
    printf("\nEnter First Polynomial");
    p1=create();
    printf("\nEnter second Polynomial");
    p2=create();

    p3=addition(p1,p2);

    printf("\nEnter First Polynomial");
    display(p1);
    printf("\nEnter Second Polynomial");
    display(p2);
    printf("\naddition");
    display(p3);

}
struct node *create()
{
        struct node *start,*n,*p;
        char ch;
        start=(struct node *)malloc(sizeof(struct node *));
        printf("\nEnter value of coefficient and exponent");
        scanf("%d%d",&start->coeff,&start->exp);
        start->link=NULL;
        p=start;

        printf("\nAdd another (y/n)");
        ch=getche();
        while(ch=='y' || ch=='Y')
        {
            n=(struct node *)malloc(sizeof(struct node *));
            printf("\nEnter value of coefficient and exponent");
            scanf("%d%d",&n->coeff,&n->exp);
            n->link=NULL;
            p->link=n;
            p=n;
            printf("\nAdd another (y/n)");
            ch=getche();
        }
 return start;
}

struct node *addition(struct node *p1,struct node *p2)
{
    struct node *start=NULL,*p,*n;
    while(p1!=NULL && p2!=NULL)
    {
    n=(struct node *)malloc(sizeof(struct node *));
    if(p1->exp==p2->exp)
    {
        n->coeff=p1->coeff+p2->coeff;
        n->exp=p1->exp;
        p1=p1->link;
        p2=p2->link;
    }
    else if(p1->exp>p2->exp)
    {
        n->coeff=p1->coeff;
        n->exp=p1->exp;
        p1=p1->link;
    }
    else
    {
        n->coeff=p2->coeff;
        n->exp=p2->exp;
        p2=p2->link;
    }
    n->link=NULL;
    if(start==NULL)
    {
        start=n;
        p=start;

    }
    else
    {
        p->link=n;
        p=n;

    }
    }
    return start;

}


void display(struct node *n)
{
    struct node *st=n;
    while(n!=NULL)
    {
    if(n==st)
    {
        printf("%dX^%d",n->coeff,n->exp);
    }
    else if(n->coeff<0)
         printf("-%dX^%d",n->coeff,n->exp);
    else
         printf("+%dX^%d",n->coeff,n->exp);
    n=n->link;
    }
}

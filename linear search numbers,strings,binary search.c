#include<stdio.h>
#include<string.h>
/*
void main()
{
    int a[5],item,n=5,i;
    printf("\nEnter %d numbers of Array",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter Number to search");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
            break;
    }
    if(i==n)
        printf("\nElement is not found");
    else
        printf("\n%d is found at %d position",item,i);

}
*/
/*
void main()
{
    char a[5][30],item[30];
    int n=5,i;

    printf("\nEnter the array elements");
    for(i=0;i<n;i++)
        gets(a[i]);
    printf("\nEnter the name to search");
    gets(item);

    for(i=0;i<n;i++)
    {
        if(strcmp(a[i],item)==0)
        break;
    }
    if(i==n)
        printf("\nElement is  not found");
    else
        printf("\nElemnt is found at %d position",i);


}
*/

void main()
{
    int a[5],n=5,item,i,beg,end,mid;
    printf("\nEnter Array Elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter element to search");
    scanf("%d",&item);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;

    while(beg<=end && a[mid]==item)
    {
        if(mid==item)
            break;
        else if(item<mid)
            end=mid-1;
        else
            beg=mid+1;

        mid=(beg+end)/2;
    }

    if(beg>=end)
        printf("\nElemet is not found");
    else
        printf("\nElement is found at %d pos",mid);
}

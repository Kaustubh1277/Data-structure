#include<stdio.h>

void main()
{
    int a[10],n=5,i,pos,item;

    printf("\nEnter %d Elements of array\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Array is");
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
    printf("\nenter number  and position to enter number into array\n");
    scanf("%d%d",&item,&pos);
    for(i=n;i>=pos;i--)
        a[i+1]=a[i];
    a[pos]=item;
    n++;
    printf("\nArray is");
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
    printf("\nEnter the position to delete an element");
    scanf("%d",&pos);
    item=a[pos];
    for(i=pos;i<=n;i++)
        a[i]=a[i+1];
        n--;

        printf("\nArray is");
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);

}

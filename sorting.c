#include<stdio.h>
/*
//bubble sort
void main()
{
    int a[10],temp,n=10,i,j;
    printf("\nEnter %d elements of Array",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
            }
        }
    }
    printf("\nAfter bubble sort...\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
*/
/*
//selection sort
void main()
{
    int a[10],n=10,i,j,temp;
    printf("\nEnter %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nAfter selection sort...\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

*/

//insertion sort
void main()
{
    int a[10],n=10,i,k,temp;
    printf("\nEnter %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(k=1;k<n;k++)
    {
        temp=a[k];
        i=k-1;
        while(i>=0 && a[i]>temp)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=temp;
    }
    printf("\nAfter insertion sort...\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

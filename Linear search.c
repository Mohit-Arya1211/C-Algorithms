#include<stdio.h>
#include<conio.h>
void main()
{
    int ar[15], x, i, n, a;
    printf("Enter the Size of the array : \n");
    scanf("%d", &n);
    for(i=0; i<n; ++i)
    {
        printf("\n Enter the elements %d in Array : ", i+1);
        scanf("%d", &ar[i]);
    }
    for(i=0; i<n; ++i)
    {
        printf(" %d ,", ar[i]);
    }
    printf(" \n Enter the element you want to search :");
    scanf("%d", &x);
    for(i=0; i<n; ++i)
    {
        if(ar[i]==x)
        {
            printf("\n The Position of the element is : %d", i+1);
        }
    }
}

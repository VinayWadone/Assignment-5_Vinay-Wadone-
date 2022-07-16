#include<stdio.h>
int main()
{
    int i,j,k;
    printf("\nEnter a number\n");
    scanf("%d",&j);
    i=2*j; k=1;
    for (i=2*j;k<=j;i=i-2)
    {
        printf("\n%d\n",i);
        k++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,j,k;
    printf("\nEnter a number\n\n\n");
    scanf("%d",&j);
    i=2;k=1;
    do
    {
        printf("\n%d\n",i);
        i=i+2;
        k++;
    }while (k<=j);
    return 0;
}

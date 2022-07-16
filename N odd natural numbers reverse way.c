#include<stdio.h>
int main()
{
    int i,j,k=1,l;
    printf("\nEnter a number\n");
    scanf("%d",&j);
    l=2*j-1;
    while (k<=j)
    {
        printf("\n%d\n",l);
        l=l-2;
        k++;
    }
    return 0;
}

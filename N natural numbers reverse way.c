#include<stdio.h>
int main()
{
    int i,j;
    printf("\n\nEnter a number of your choice\n\n");
    scanf("%d",&j);
    for(i=j;i>=1;i--)
    {
        printf("\n%d\n",i);
    }
    return 0;
}

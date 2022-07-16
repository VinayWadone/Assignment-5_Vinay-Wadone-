#include<stdio.h>
int main()
{
    int i,j,k=1;
        printf("\n\nEneter a number of your choice\n\n");
        scanf("%d",&j);
        for(i=1;k<=j;i=i+2)
        {
            printf("\n%d\n",i);
            k++;
        }
        return 0;
}

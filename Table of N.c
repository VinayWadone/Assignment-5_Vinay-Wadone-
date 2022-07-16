#include<stdio.h>
int main()
{
    int i,j,k;
    printf("\nEnter a number\n");
    scanf("%d",&j);
    i=1;
    while(i<=10)
    {
     k=i*j;
     printf("\n%d X %d = %d\n",j,i,k);
     i++;
    }

   /* for(i=0;i<=10;i++);
    {
     k=i*j;
     printf("\n%d X %d = %d\n",j,i,k);
     printf("\n%d\n",k);
    }*/
    return 0;
}

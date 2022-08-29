#include<stdio.h>
int main()
{
        int a,b,i,j;
        printf("Entre the two number\n");
        scanf("%d%d",&a,&b);
        for(i=a+1;i<b;i++)
        {
        for(j=2;j<i;j++)
        {
        if(i%j==0)
        break;
        }
        if(j==i)
        printf("%d,",i);
        }
}

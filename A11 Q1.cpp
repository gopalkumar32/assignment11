#include<stdio.h>
int LCM(int,int);
int main()
{
        int a,b,c;
        printf("Entre two number\n");
        scanf("%d%d",&a,&b);
        c=LCM(a,b);
        printf("LCM of two number is %d",c);
}
int LCM(int a,int b)
{
        int i;
        for(i=a>b?a:b;i<=a*b;i++)
        if(i%a==0&&i%b==0)
        break;
        return i;
}

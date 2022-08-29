#include<stdio.h>
int HCF(int ,int);
int main()
{
	int a,b,c;
	printf("Entre the two number\n");
	scanf("%d%d",&a,&b);
	c=HCF(a,b);
	printf("HCF of two number is %d",c);
}
int HCF(int a,int b)
{
	int i;
	for(i=a>b?b:a;i>=1;i--)
	if(a%i==0&&b%i==0)
	break;
	return i;
}

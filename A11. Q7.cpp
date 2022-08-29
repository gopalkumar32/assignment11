#include<stdio.h>
void fibo(int);
int main()
{ 
   int num;
   printf("Entre the nunber\n");
   scanf("%d",&num);
   fibo(num);
}
void fibo(int num)
{
	int a,b,c;
	a=-1;
	b=1;
	for(int i=1;i<=num;i++)
	{
	c=a+b;
	printf("%d ,",c);
	a=b;
	b=c;
}
}

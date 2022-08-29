#include<stdio.h>
int square(int);
int main()
{
	int num,s;
	printf("Entre the number\n");
	scanf("%d",&num);
	s=square(num);
	printf("Square of %d is %d",num,s);
}
int square(int num)
{ int a=1;
	for(int i=1;i<=num;i++)
	a=num*i;
	return a;
	
}

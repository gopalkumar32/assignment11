#include<stdio.h>
int main()
{
	int num,i;
	printf("Entre the number\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
	  if(num%i==0)
	  {
	  	printf("not prime number");
	  	break;
	  }
	}
	if(i==num)
	printf("prime number");
}

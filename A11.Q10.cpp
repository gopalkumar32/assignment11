#include<stdio.h>
int series(int);
int main()
{
	int s,i=5;
	s=series(i);
	printf("Sum of series is %d",s);
}
int series(int i)
{
int fact,sum =0;
	for(int j=1;j<=i;j++)
	{
		fact=1;
		for(int k=1;k<=j;k++)
		fact=fact*k;
		sum=sum+fact/j;
	}
	return sum;
}

#include<stdio.h>
#include<conio.h>
int sum(int num);
int main()
{
	int n,result;
	printf("Enter the number : ");
	scanf("%d",&n);
	result=sum(n);
	printf("sum of digits of %d is : %d",n,result);
	return 0;
}
int sum(int num)
{

	if(num!=0)
	{
		return(num%10 + sum(num/10));
	}
	else
	{
		return 0;
	}
}

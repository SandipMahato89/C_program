 #include<stdio.h>
 #include<conio.h>
 int prime(int num);
 int i;
int main()
{
	int n,result;
	printf("Enter the number  : ");
	scanf("%d",&n);
	i=n/2;
	result=prime(n);
	if(result==1)
		printf("\n The number is prime");
	else
		printf("\n not prime");
	return 0;
}
int prime(int num)
{
	
	if(i==1)
	{
		return 1;
	}
	else if(num%i==0)
	{
		return 0;
	}
	else
	{
		i=i-1;
		prime(num);
	}
	
}

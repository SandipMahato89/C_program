#include<stdio.h>
#include<conio.h>
int fun_lcm(int n1,int n2);
int temp;

int main()
{
	int num1,num2,result;
	printf("Enter the first numer: ");
	scanf("%d",&num1);
	printf("\n Enter the second numer: ");
	scanf("%d",&num2);
	temp=num1>num1?num1:num2;
	result=fun_lcm(num1,num2);
	printf("\n\n LCM of %d and %d is %d ",num1,num2,result);
	return 0;
	
	
}
int fun_lcm(int n1,int n2)
{
	if(temp%n1==0 && temp%n2==0)
	{
		return temp;
	}
		++temp;
		fun_lcm(n1,n2);
		return temp;
	
}

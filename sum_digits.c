#include<stdio.h>
//void sum_recursion(int num);
int main()
{
	int n,num;
	printf("Enter the number : ");
	scanf("%",&n);
	int r,sum=0;

	num=n;
	while(num!=0)
		{
			r=num%10;
		
			sum=sum+r;
				num=num/10;
	    }
	
	printf("%d",sum);
	return 0;
}

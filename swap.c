#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2;
	printf("Enter the 1st number : ");
	scanf("%d",&n1);
	printf("Enter the 2nd number : ");
	scanf("%d",&n2);
	printf("\n Before swapping : ");
	printf("\n n1 = %d and n2 = %d",n1,n2);
	n2=n1+n2;
	n1=n2-n1;
	n2=n2-n1;
	printf("\n After swapping : ");
	printf("\n n1 = %d and n2 = %d",n1,n2);
	return 0;
}
//example
// n1=2 and n2=3
//adding both the numbers 
//n2=n+n1 : 2+3 = 5
// swapping
//n1=n2-n1: n1=5-2  n1=3
//n2=n2-n1 : n2=5-3  n2=2

#include<stdio.h>
void main(){
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	if(n>=0)
	{
		if(n%2 ==0)
			printf("\nPositive Even");
		else 
			printf("\nPositive odd");
	}
	else
	{
		if(n%2 == 0)
			printf("\nNegative Even");
		else
			printf("\nNegative odd");
	}
}

#include<stdio.h>
void main(){
	printf("Enter the pair of numbers");
	int a,b;
	scanf("%d%d",&a,&b);
	int sum = 0;
	int i=0;
	for(i =b;i<a;i++)
	{
		if(i % 2 != 0)
		{
			printf("%d\n",i);
			sum += i;
		}
	}
	printf("Sum of odd numbers = %d",sum);
}

#include<stdio.h>
void main(){
	int a[5];
	int sum = 0,count=0;
	printf("Enter the five numbers");
	int i = 0;
	for(i =0;i<5;i++)
		scanf("%d",&a[i]);
	for(i =0;i<5;i++)
	{
		if(a[i]%2 != 0)
			sum += a[i];
	}
	printf("Sum of odd = %d",sum);
}

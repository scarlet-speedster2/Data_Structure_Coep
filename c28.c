#include<stdio.h>
void main(){
	int a[5];
	int count = 0,sum =0;
	printf("Enter 5 elements..");
	int i =0;
	for(i =0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		if(a[i]>0)
		{
			count++;
			sum +=a[i];
		}
	}
	printf("\nCount = %d \t Sum = %d \n",count,sum);
}

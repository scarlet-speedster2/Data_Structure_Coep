#include<stdio.h>
void main(){
	int range;
	printf("Enter the specified value\n");
	int i;
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		if(i%2 == 0)
		{
			printf("%d ^ 2 = %d\n",i,i*i);
		}
	}
}

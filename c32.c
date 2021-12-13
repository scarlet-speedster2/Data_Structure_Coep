#include<stdio.h>
void main(){
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	int i;
	for(i=1;i<100;i++)
	{
		if(i%n == 3)
			printf("%d\n",i);
	}
}

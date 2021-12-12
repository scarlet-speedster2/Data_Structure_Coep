#include<stdio.h>
void main(){
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(n<0 && n>80)
		printf("Error...\n");
	else if(n>=0 && n<=20)
		printf("Range [0-20]\n");
	else if(n>20 && n<=40)
		printf("Range [21-40]\n");
	else if (n>40 && n<=60)
		printf("Range [41-60]\n");
	else 
		printf("Range [61-80]\n");
}

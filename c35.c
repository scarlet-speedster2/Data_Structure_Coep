#include<stdio.h>
void main(){
	int a,b;
	printf("Enter the pair numbers");
	scanf("%d%d",&a,&b);
	if(a<b)
		printf("Pair is in accending order");
	else 
		printf("Pair is in the decending order");
}

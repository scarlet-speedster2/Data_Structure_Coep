#include<stdio.h>
void main(){
	int p,q,r,s;
	printf("Enter 4 integer p q r s");
	scanf("%d%d%d%d",&p,&q,&r,&s);
	if(p % 2 == 0){
		if (q>r && s>p && (r+s) > (p+q))
			printf("correct value");
		else 
			printf("worng values");

	}
	else 
		printf("wornge values");
}

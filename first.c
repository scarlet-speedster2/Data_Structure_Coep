/*------------------------
 * Name : Snehal Shinde
 * Div-2 S5 Batch
 * ----------------------*/

//Assignment No 1 

#include<stdio.h>

int main(){
	int a[10];
	int i = 0;
	printf("Enter the 10  array elements");
	for(i =0;i<10;i++)
		scanf("%d",&a[i]);
	int sq,sum=0;
	for(i=0;i<10;i++){
		sq = a[i]*a[i];
		sum += sq;
	}
	printf("Sum of Squares = %d\n",sum);
}

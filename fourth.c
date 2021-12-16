#include<stdio.h>

int main(){
	int a[20];
	printf("Enter 20 integers");
	int i = 0;
	for(i = 0;i<20;i++)
		scanf("%d",&a[i]);
	int positive = 0, negative = 0, odd = 0, even = 0, zeros = 0;
	for(i = 0;i<20; i++){
		if(a[i] > 0)
			positive++;
		else if(a[i] < 0)
			negative++;
		else
			zeros++;
		if(a[i]%2 == 0)
			even++;
		else 
			odd++;
	}
	printf("No of Positive Integers = %d\nNo of Negative Integers = %d\n",positive,negative);
	printf("No of Odd Integers = %d\nNo of Even Integers = %d\nNo of Zeros = %d\n",odd,even,zeros);
	return 0;
}

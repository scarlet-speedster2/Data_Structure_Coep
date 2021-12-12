#include<stdio.h>
void main(){
	int kilo;
	float dis;
	float avg;
	printf("Enter the kilometer and the distance travlled");
	scanf("%d%f",&kilo,&dis);
	avg = kilo/dis;
	printf("\n Total mileage = %.3f",avg);
}

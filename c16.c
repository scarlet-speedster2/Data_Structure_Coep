#include<stdio.h>
void main(){
	float money;
	printf("Enter the amount");
	scanf("%f",&money);
	float hundy =(int) money/100;
	printf("\nThere are %f 100 notes",hundy);
	money = money -(hundy*100);
	float fifty =(int) money/50;
	printf("\nThere are %f 50 notes",fifty);
	money = money -(fifty * 50);
	float twenty =(int) money /20;
	printf("\nThere are %f 20 notes",twenty);
	money = money - (twenty *20);
	float ten = (int) money/10;
	printf("\n There are %f 10 notes",ten);
	money = money - (ten *10);
	float five = (int) money/5;
	printf("\nThere are %f 5 notes",five);
	money = money - (five * 5);
	float two = (int) money/2;
	printf("\nThere are %f 2 notes",two);
	money = money - (two *2);
	float one = (int) money /1;
	printf("\nThere are %f 1notes",one);
}



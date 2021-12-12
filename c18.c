#include<stdio.h>
void main(){
	int days;
	printf("Enter the days");
	scanf("%d",&days);
	int year = (int)days/365;
	days = days - (year * 365);
	int month = (int) days/30;
	days = days- (month * 30);
	printf("\nYears : %d Month : %d Days : %d",year,month,days);
}

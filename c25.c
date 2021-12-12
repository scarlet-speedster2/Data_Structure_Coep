#include<stdio.h>
void main(){
	int month;
	printf("Enter the month\n");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("January");
			break;
		case 2:
			printf("Februay");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("JUly");
			break;
		case 8:
			printf("Augest");
			break;
		case 9:
			printf("Sep");
			break;
		case 10:
			printf("Octo");
			break;
		case 11:
			printf("Nov");
			break;
		case 12:
			printf("Decm");
			break;
		default:
			printf("Invalid month");
	}
}	

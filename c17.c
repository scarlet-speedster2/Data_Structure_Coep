#include<stdio.h>
void main(){
	int sec;
	printf("\nEnter the seconds");
	scanf("%d",&sec);
	int hour = (int)sec / 3600;
	sec = sec - (hour * 3600);
	int min = (int)sec / 60;
	sec = sec -(min * 60);
	printf("H:%d M:%d S:%d",hour,min,sec);
}

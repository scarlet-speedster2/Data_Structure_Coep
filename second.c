#include<stdio.h>

int main(){

	int n;
	printf("Please enter the size of an array");
	scanf("%d",&n);
	int a[n];
	int i = 0;
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Array elements before reverse\n");
	for(i=0; i<n;i++)
		printf("%d\n",a[i]);
	printf("Array elements in reverse\n");
	for(i=n-1;i>=0;i--)
		printf("%d\n",a[i]);
	return 0;
}


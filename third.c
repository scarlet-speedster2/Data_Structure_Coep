#include<stdio.h>

int main(){

	int n;
	printf("Enter the size of an array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements");
	int i = 0, j = 0;
	for(i = 0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n\n Triangle Pattern \n\n");
	for(i = 0;i<n;i++){
		for(j = 0;j<=i;j++)
			printf("%d ",a[j]);
		printf("\n");
	}
}


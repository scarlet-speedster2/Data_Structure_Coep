#include<stdio.h>
#define SIZE 10

int main(){
	int n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int a[n];
	int i = 0;
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int j,flag = 0;
	for(i=0,j=n-1;j>=0,i<n;i++,j--){
		if(a[i] != a[j])
			flag = 1;
		
	}
	if(flag)
		printf("Array elements are not palindrome\n");
	else
		printf("Array elements are palindrome\n");
}


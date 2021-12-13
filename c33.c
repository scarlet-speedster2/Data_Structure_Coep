#include<stdio.h>
void main(){
	printf("Enter the number of integer...");
	int n;
	int pos = 0;
	scanf("%d",&n);
	int a[n];
	int i = 0,max =0;
	printf("Enter %d numbers",n);
	for(i = 0;i<n;i++)
		scanf("%d",&a[i]);

	for(i = 0;i<n;i++)
	{
		if(a[i]>max)
		{ 
			max = a[i];
			pos = i + 1;
		}
	}
	printf("Maximum element is %d and Position is %d\n",max,pos);
}


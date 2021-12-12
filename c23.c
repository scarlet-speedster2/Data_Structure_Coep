#include<stdio.h>
void main(){
	int a,b,c,peri;
	printf("Enter the three sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>c && (a+c)>b && (b+c)>a)
	{
		peri = a+b+c;
		printf("Perimeter of triangle = %d",peri);
	}
	else 
		printf("sides dont form a triangle\n");
}
	

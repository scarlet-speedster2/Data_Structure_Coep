#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c;
	printf("Enter three numbers:\n");
	scanf("%f%f%f",&a,&b,&c);
	float b2 = ((b*b)-4*a*c);
	if(b2>0 && a!=0){
		b2 = sqrt(b2);
		printf("First root : %f",(-b + b2)/(2*a));
		printf("\nSecond root : %f",(-b - b2)/(2*a));
	}
	else
		printf("Roots are not possible");
}

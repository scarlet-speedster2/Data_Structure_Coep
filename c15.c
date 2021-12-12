#include<stdio.h>
#include<math.h>
void main(){
	//Eucidian Distance
	double x1,x2,y1,y2;
	double dis;
	printf("Enter the cooridinate");
	scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
	dis = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
	printf("Distance = %lf",sqrt(dis));

}	

#include<stdio.h>
int main()
{
	float a,b,area,peri;
	printf("enter the length");
	scanf("%f",&a);
	printf("enter the breadth");
	scanf("%f",&b);
	area=a*b;
	peri=2*(a+b);
	printf("the area and perimeter of a rectangle are %f and %f respectively",area,peri);
}

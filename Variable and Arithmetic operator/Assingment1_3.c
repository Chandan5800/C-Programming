# include <stdio.h>
int main ()
{
	float Volume,radius,height;
	printf("Enter a radius\t");
	scanf("%f",&radius);
	printf("Enter a height\t");
	scanf("%f", &height);
	Volume=3.14*radius*radius*height;
	printf("%f Volume ",Volume);
} 

# include <stdio.h>
int main()
{
	float a,b,c;
	printf("Enter first number\t");
	scanf("%f",&a);
	printf("Enter second number\t");
	scanf("%f",&b);
	printf("Enter third number\t");
	scanf("%f",&c);
	if(a>=b && a>=c)
	{
		printf("%f is a greatest number",a);
	}
	if(b>=c && b>=a)
	{
		printf("%f is a greatest number",b);
	}
	if(c>=a && c>=b)
	{
		printf("%f is a greatest number",c);
	}
	
}

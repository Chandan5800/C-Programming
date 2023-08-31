# include <stdio.h>
int factorial(int);
int main()
{
	int n,fact;
	printf("Enter your number: ");
	scanf("%d",&n);
	fact = factorial(n);
	printf("Factorial of %d is : %d",n,fact);
	return 0;
}
    int factorial(int n)
    {
    	if (n==0)
    	return 1;
    	else
    	return n*factorial(n-1);
	}

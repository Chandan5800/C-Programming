# include <stdio.h>
int main()
{
    int x;
	printf("enter a number\t");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}
	return(0);
}


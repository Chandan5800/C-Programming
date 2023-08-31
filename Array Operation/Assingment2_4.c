// Minimum value of array//
#include <stdio.h>
int main()
{
	int array[10],i,min;
	for(i=0;i<10;i++)
	{
		printf("Enter number:");
		scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
    	printf("%d, ",array[i]);
	}
	min=array[0];
	for(i=0;i<10;i++)
	{
		if(min>array[i])
		min=array[i];
	}
	printf("\n Min value = %d\n",min);
	return 0;
}

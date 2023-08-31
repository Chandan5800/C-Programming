// Maximum value of array//
#include <stdio.h>
int main()
{
	int array[10],i,max;
	for(i=0;i<10;i++)
	{
	printf("Enter number:");
	scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
    	printf("%d, ",array[i]);
	}
	max=array[0];
	for(i=0;i<10;i++)
	{
		if(max<array[i])
		max=array[i];
	}
	printf("\n Max value = %d",max);
	return 0;
}

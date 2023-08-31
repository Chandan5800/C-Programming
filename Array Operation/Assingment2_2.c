// W.A.P to find sum of all array elements.//
#include <stdio.h>
int main()
{
	int array[10],i,sum=0;
	for(i=0;i<10;i++)
	{
	printf("Enter number:");
	scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
    	printf("%d ",array[i]);
	}
	for(i=0;i<10;i++)
	sum=sum+array[i];
	printf("\nSum of array element = %d",sum);
     return 0;
}

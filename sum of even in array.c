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
    	printf("%d \n",array[i]);
	}
	for(i=0;i<10;i++)
	if(array[i]%2==0)
	{
		printf("Even:%d \n",array[i]);
    }
    for(i=0;i<10;i++)
    sum=sum+array[i];
    printf("Sum = %d",sum);
     return 0;
}

// Display 10 element in array //
#include <stdio.h>
int main()
{
	int array[10],i;
	for(i=0;i<10;i++)
	{
	printf("Enter number:");
	scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
    	printf("%d\n",array[i]);
	}
     return 0;
}

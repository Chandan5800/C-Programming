# include <stdio.h>
int main()
{
	int i,n,t1=0,t2=1,nextterm=t1+t2;
	printf("Enter your Terms:\n");
	scanf("%d",&n);
	
	printf("Fibonacci series: %d, %d ",t1,t2);
	
	for(i=3;i<=n;i++)
	{
		printf("%d,",nextterm);
		t1=t2;
		t2=nextterm;
		nextterm=t1+t2;
	}
	return 0;
}

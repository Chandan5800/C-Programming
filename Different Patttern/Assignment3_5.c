#include<stdio.h>
int main()
{
    int out,in,p;
    printf("Enter the row size:");
	    int row_size;
	    scanf("%d",&row_size);
	    for(out=row_size;out>=1;out--)
	    {
	     for(in=row_size-1;in>=out;in--)
	     {
	    	 printf(" ");
	     }
	    	 for(p=out;p>=1;p--)
	    	 {
	    		 printf("%d ",out);
	    	 }
	    	 printf("\n");
}}


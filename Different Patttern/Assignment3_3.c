#include <stdio.h>
int main()
{

  printf("Enter the row size:");
  int row_size,out,in1,in2;
  int np=1;
  scanf("%d",&row_size);
  for(out=0;out<row_size;out++)
       {
       for(in1=row_size-1;in1>out;in1--)
       {
            printf(" ");
       }
       for(in2=0;in2<np;in2++)
       {
           printf("%d",np-out);
       }
       np+=2;
       printf("\n");
       }
}


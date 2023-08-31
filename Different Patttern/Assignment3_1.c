#include<stdio.h>
int main()
{
  printf("Enter the row size:");
  int row_size,in,out,p;
  scanf("%d",&row_size);
  for( out=1;out<=row_size;out++)
  {
   for( in=1;in<out;in++)
    printf(" ");

   for(p=row_size;p>=out;p--)
    printf("* ");

   printf("\n");
}}

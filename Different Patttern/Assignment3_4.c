#include<stdio.h>
int main()
{
  printf("Enter the row and column size:");
  int out,in;
  char row_size;
  scanf("%c",&row_size);
  for(out='A';out<=row_size;out++)
  {
   for(in='A';in<=row_size;in++)
    printf("%c ",in);
   printf("\n");
  }
}

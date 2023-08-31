#include <stdio.h>
int main()
{
  printf("Enter the row size:");
  int out, in;
  char row_size;
  scanf("%c", &row_size);
  for (out = 'A'; out <= row_size; out++)
  {
    for (in = row_size; in >= out; in--)
      printf("%c ", out);
    printf("\n");
  }
}

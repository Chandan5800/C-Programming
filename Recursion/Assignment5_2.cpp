#include <stdio.h>
int fibonacci(int num){
if(num == 0) {
return 0;
} else if(num == 1) { 
return 1;
} else {
//recursive call
return (fibonacci(num-1) + fibonacci(num-2));
} 
}
main()
{
/* Assume we want to print first six number of Fibonacci series. */
int num = 100;
//printf("Enter a number");
//scanf("%d", &num);
for(int i = 0; i < num; i++) {
/* Call fibonacci function. */
printf(" %d ",fibonacci(i));
}
}

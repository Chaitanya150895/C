
#include<stdio.h>
 
int main()
{
   int a, b, c, d, e, f;
   float g;
   
   printf("Enter two numbers to add\n");
   scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
   
   f = a + b + c + d + e;
   
   printf("Aggregate = %d\n", f);
   
   g = f / 5;
   
   printf("percentage = %f\n", g);
   
   return 0;
}
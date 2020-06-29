#include <stdio.h>

int main()
{
   int a, b, c, d , e, f;

   printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%d%d", &a, &b);
   printf("Enter c and d where c + id is the second complex number.\n");
   scanf("%d%d", &c, &d);

   e = a*c - b*d;
   f = a*d + b*c;

   printf("The product of the complex numbers: (%d) + (%di)\n", e, f);

   return 0;
}

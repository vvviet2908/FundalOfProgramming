#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/
 
int main()
{
  int i, factor =1, n;
  
  printf("Enter the number \n");
  scanf("%d", &n);
  
   for(i = 1; i <= n; i++)
  {
  	if ( i%2 == 0 && n%2 == 0) 
  	{
        factor=factor*i;
  	}
  	if (i%2 != 0 && n%2 !=0)
  	{
  		factor=factor*i;
	}
  }
  printf("The Factorial of %d = %d\n", n, factor);
  return 0;
}

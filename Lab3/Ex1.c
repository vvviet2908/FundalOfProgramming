#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/
 
int main()
{
  int i, esum = 0, osum = 0;
 
  
  for(i = 1; i <= 100; i++)
  {
  	if ( i%2 == 0 ) 
  	{
        esum = esum + i;
  	}
  	else
  	{
  		osum = osum + i;
	}
  }
  printf("The Sum of Even Numbers  = %d\n", esum);
  printf("The Sum of Odd Numbers upto = %d\n", osum);

  return 0;
}

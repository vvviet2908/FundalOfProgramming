#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/

int main()
{
  int i, sso =0, n;
  
  printf("Enter the number \n");
  scanf("%d", &n);
  
   for(i = 1; i <= n; i++)
  {
  	if ( i%2 != 0) {
  		sso=sso+(i*i);
	  }
}

	printf("The sum of all squared odd numbers less than %d = %d\n",n , sso);
	
	return 0;
}
	

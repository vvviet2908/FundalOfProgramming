#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/

int main()
{
  int i, n;
  float r,b;
  
  printf("Enter the current balance\n");
  scanf("%f", &b);
  printf("Enter the yearly interest rate\n");
  scanf("%f",&r);
  printf("Enter the number of year \n");
  scanf("%d", &n);
  
  for( i=1; i <= n; i++){
  	b=b+(b*r);
  }
  
  printf("The ending balance after %d years is %0.2f",n,b);
  return 0;
}

#include <stdio.h>
 /*author: Vo Van Viet - ITDSIU18043*/
int main()
{ 
	int n, x;
	
	printf("Enter the number \n");
	scanf("%d",&n);
	
	printf("From 0 to N:\n");
	printf("Number\tSquare\tCube\n");
	
	for(x=0; x<=n; x++)
		printf("%d\t%d\t%d\n",x,x*x,x*x*x);
	printf("---------------------\n");	
	printf("From N to 0:\n");
	printf("Number\tSquare\tCube\n");
	
	for(x=n; x>=0; x--)
		printf("%d\t%d\t%d\n",x,x*x,x*x*x);
		
	return 0;
}

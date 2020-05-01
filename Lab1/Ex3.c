#include <stdio.h>
 /*author: Vo Van Viet - ITDSIU18043*/
int main()
{ 
	int n,p,i;
	
	printf("Enter the number \n");
	scanf("%d",&n);
	for(p=2;p<=n;p++)
	{
	
 	 i=2;
 	while(p%i!=0)
  	{
  		i++;
  	}
  	
 	if(i==p)
  	{
		printf("Prime number: %d\n",p);
		}
		
  }
 	return 0;
}


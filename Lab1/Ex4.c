#include <stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/
int main(){
	
	int x,y,a,s;
	
	
	printf("enter number x: \n");
	scanf("%d",&x);
	printf("enter number y: \n");
	scanf("%d",&y);
	a=x*y;
	
	s= a*(3*a-2*y-7*x+15)+x*(2*x-3)-y*(4*y-10)+6;
	
	printf("S = %d\n",s);
	
	return 0;
}

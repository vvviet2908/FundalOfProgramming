#include <stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/
int main(){
	int x,y;
	int *p,*q;
	
	x=2;
	y=8;
	p=&x;
	q=&y;
	printf("The address of x is %d\n",&x);
	printf("The value of x is %d\n",x);
	printf("The value of p is %d\n",p);
	printf("The value of *p is %d\n", *p);
	printf("The address of y is %d\n", &y);
	printf("The value of y is %d\n", y);
	printf("The value of q is %d\n",q);
	printf("The value of *q is %d\n",*q);
	printf("The address of p is %d\n",&p);
	printf("The address of q is %d\n",&q);
	
	return 0;
}

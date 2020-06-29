#include <stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/
void swapValue(int *element1Ptr, int *element2Ptr){
	int hold= *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}
int main(){
	int x,y,z;
	int *p,*q,*r;
	x=1;
	y=2;
	z=3;
	p=&x;
	q=&y;
	r=&z;
	printf("The value of x is %d\n",x);
	printf("The value of y is %d\n", y);
	printf("The value of z is %d\n", z);
	printf("The value of p is %d\n",p);
	printf("The value of q is %d\n",q);
	printf("The value of r is %d\n",r);
	printf("The value of *p is %d\n", *p);
	printf("The value of *q is %d\n",*q);
	printf("The value of *r is %d\n",*r);
	
	swapValue(&z,&x);
	swapValue(&x,&y);
	swapValue(&y,&z);
	
	printf("The value of x is %d\n",x);
	printf("The value of y is %d\n", y);
	printf("The value of z is %d\n", z);
	printf("The value of p is %d\n",p);
	printf("The value of q is %d\n",q);
	printf("The value of r is %d\n",r);
	printf("The value of *p is %d\n", *p);
	printf("The value of *q is %d\n",*q);
	printf("The value of *r is %d\n",*r);
}

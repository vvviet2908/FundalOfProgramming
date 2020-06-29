/*Write a program in C to display the multiplication table of a given integer*/
#include <stdio.h>
void main(){
	int j,n;
	printf("enter a number\n");
	scanf("%d",&n);
	for(j=1;j<=10;j++){
		printf("\n%d x %d = %d",n,j,n*j);
	}
	return 0;
}

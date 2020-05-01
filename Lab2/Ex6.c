#include<stdio.h>
 /*author: Vo Van Viet - ITDSIU18043*/
int main() {
    int i, k, j, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; ++i) {
        for (j=n-i; j>=1; --j)
        { printf(" "); }
        for (k=1; k <=i; ++k)
		{printf("%d",i);}
        printf("\n");
    }
    return 0;
}

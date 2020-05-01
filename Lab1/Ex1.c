#include <stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/
int main()
{
	int n,digit;
    printf("Enter the number: \n");
    scanf("%d",&n);

    while(n != 0)
    {
        digit = n % 10;
        n = n / 10;
        printf("%d\n", digit);
    }

    return 0;
}

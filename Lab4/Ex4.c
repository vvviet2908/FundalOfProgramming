#include <stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/

int main()
{
    int n, num = 1, i, j;
 
    printf("Enter number of rows: ");
    scanf("%d",&n);
 
    for(i=0; i<n; i++)        
    {
       
        for(j=0; j <= i; j++)     
        {
            if (j==0 || i==0) 
                num = 1;
            else
                num = num*(i-j+1)/j; 
 
            printf(" %d ", num);
        }
        printf("\n");
    }
 
    return 0;
}

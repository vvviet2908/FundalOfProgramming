#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/

void inputArray(int a[], int size)
{
    int i;


    for(i = 0; i < size; i++)
    {
            printf("Enter the number: ");
   			scanf("%d", &a[i]);
    }
}

void outputArray(int a[], int size)
{
    int i;

    printf("Array elements are:\n ");
    for(i = 0; i < size; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");
}

void indices(int a[], int size, int target)
{
	int m, n;
	 for (m=0;m<size;m++)
	    for (n=m+1;n<size;n++)
		    if ((a[m]+a[n])==target)
		    	    printf("[%d,%d]",m,n);
}

int main()
{
    int n,i,m,target;
    int size;
    
    printf("enter the size number:");
    scanf("%d",&size);
	int arr[size];
	inputArray(arr,size);
  	outputArray(arr, size);
  	printf("enter the target:");
    scanf("%d",&target);
	indices(arr,size,target);
	return 0;
}

#include<stdio.h>
void inputArray(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
            printf("Enter the number: ");
   			scanf("%d", &a[i]);
    }
}
void outputArray(int a[], int n)
{
    int i;
    printf("Array elements are:\n ");
    for(i = 0; i < n; i++)
    {
        printf("%d   ", a[i]);
    }
}
int isPrime(int n, int i)
{
	if (i==1) return 1;
	else if(n%i==0) return 0;
	else return isPrime(n,i-1);
}
int main()
{	
int j;
    int size;
    printf("enter the size:");
    scanf("%d",&size);
	int arr[size];
	inputArray(arr,size);
  	outputArray(arr, size);
  	for (j=0;j<size;j++)
  	{
  		if (isPrime(arr[j],arr[j]-1)==1)
  		{
  			printf("\nThe index of first prime is: %d",j);
  			return 0;
		}
	}
	printf("\nResult= -1");
	return 0;
}

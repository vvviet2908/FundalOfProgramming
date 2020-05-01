#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/

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
        printf("%d, ", a[i]);
    }
}

void sort(int a[], int n)
{
    int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n/2)-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}

		for(j=(n/2)+1;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}


int main()
{
    int n,i;
    int size;
    
    printf("enter the size with an odd number:");
    scanf("%d",&size);
	int arr[size];
	inputArray(arr,size);
  	outputArray(arr, size);
	sort(arr, size);
	return 0;
}


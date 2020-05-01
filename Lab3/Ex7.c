#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/

void inputArray(int arr[], int size)
{
    int i;


    for(i = 0; i < size; i++)
    {
            printf("Enter the number: ");
   			scanf("%d", &arr[i]);
    }
}

void outputArray(int arr[], int size)
{
    int i;

    printf("Array elements are: ");
    for(i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int size, arr[size];
    
    printf("enter the size:");
    scanf("%d",&size);
	
	inputArray(arr,size);
    outputArray(arr, size);    // Pass array directly to function printArray

    return 0;
}

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

    printf("Array elements are: \n");
    for(i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
}

void isSymetric(int arr[], int size)
{
	int i;
	int j;
for (i = 0, j = size - 1; i < j; i++, j--) {
    if (arr[i] != arr[j]) {
        printf("\nThis array is not symmetric\n");
        return 0; 
    }
}
    printf ("\nArray is symmetric\n");
    return 1;
}


int main()
{
    int n,i;
    int size, arr[size];
    
    printf("enter the size:");
    scanf("%d",&size);
	
	inputArray(arr,size);
    outputArray(arr, size);
    isSymetric(arr,size);
    
    return 0;
}

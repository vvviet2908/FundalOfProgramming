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

int main(){
	int n,i;
    int size;
    
    printf("enter the size:");
    scanf("%d",&size);
	int arr[size];
	inputArray(arr,size);
  	outputArray(arr, size);
  	
  	return 0;
  }

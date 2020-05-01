#include<stdio.h>
#include<stdlib.h>
/*author: Vo Van Viet - ITDSIU18043*/

void inputArray(int arr[], int size, int range)
{
    int i;
	size = rand()%range+1;
    for(i = 0; i < size; i++)
    {
            printf("Enter the number: ");
   			scanf("%d", &arr[i]);
    }
}


int main(){
	int n,i;
	int range;
	printf("enter the range:");
    scanf("%d",&range);
    int size;
	int arr[size];
	inputArray(arr,size,range);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/*author: Vo Van Viet - ITDSIU18043*/
int random(int arr[], int size){
	int i;
	for (i=0; i< size;i++){
		arr[i] = rand() % 99 +1;
	} 
	for (i=0; i< size;i++){
		printf("%5d", arr[i]);
	} 
}

void bubble ( int arr[], const int size, int(*compare)(int,int)){
	int pass, count;
	void swap ( int *, int *);
	for (pass=1; pass<size; pass++)
		for (count = 0; count < size - 1; count++)
			if ((*compare) (arr[count], arr[count +1]))
				swap(&arr[count], &arr[count +1]);
}

void swap(int *element1Ptr, int *element2Ptr){
	int hold= *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}

int ascending ( int a, int b){
	return b <a;
}
int main(){
	int arr[SIZE*2];
	int i;
	printf("\n The original array elements are:\n ");
	random(arr, SIZE);
	bubble(arr, SIZE, ascending);
	printf("\n The sorted array: \n");
	for (i=0; i<SIZE; i++)
		printf("%5d",arr[i]);
		
	printf("\n The original array with double size elements are:\n ");
	random(arr, SIZE*2);
	bubble(arr, SIZE*2, ascending);
	printf("\n The sorted array: \n");
	for (i=0; i<SIZE*2; i++)
		printf("%5d",arr[i]);
	
	return 0; 
}

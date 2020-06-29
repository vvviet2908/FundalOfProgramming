#include <stdio.h>

float max(int a, int b) 
{
   return ((a > b) ? a : b);
}
float min(int a, int b) 
{
   return ((a < b) ? a : b);
}
float median(int arr[], int size) 
{
   if (size % 2 == 0)
         return (arr[size/2] + arr[size/2-1])/2;
   else
         return arr[size/2];
}
float median2SortedArrays(int arr1[], int arr2[], int size) 
{
   float med1;
   float med2;
   if(size <= 0) return -1;
   if(size == 1) return (arr1[0] + arr2[0])/2;
   if (size == 2) return (max(arr1[0], arr2[0]) + min(arr1[1], arr2[1])) / 2;

   med1 = median(arr1, size); 
   med2 = median(arr2, size); 

   if(med1 == med2) return med1;

   if (med1 < med2) 
   {
      return median2SortedArrays(arr1 + size/2, arr2, size - size/2);
   }
   else 
   {
      return median2SortedArrays(arr2 + size/2, arr1, size - size/2);
   }
}

int main() 
{
   int n, i,size;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a1[n], a2[n];
    printf("\n Enter the first Array elements: \n");
    for(i=0; i<n; i++)
        scanf("%d",&a1[i]);
    printf("\n Enter the Second Array elements: \n");
    for(i=0; i<n; i++)
        scanf("%d",&a2[i]);
    size = sizeof(a2) / sizeof(a2[0]);
   printf("\nThe Median of the 2 sorted arrays is: %f",median2SortedArrays(a1, a2, size));
   printf("\n");
   return 0;
}

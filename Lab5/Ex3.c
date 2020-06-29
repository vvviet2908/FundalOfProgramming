#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/

int main()
{
   int n,i,j;
   printf("Enter n:");
   scanf("%d",&n);;
  
   printf("Enter %dx%d matrix:\n",n,n);
   int a[n][n];
   for( i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);  
       }  
   }
  
   //sorting 1'st diagonal in increasing order
   for( i=0;i<n;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
           if(a[j+1][j+1]<a[j][j])
           {
               int k=a[j][j];
               a[j][j]=a[j+1][j+1];
               a[j+1][j+1]=k;  
           }
       }
   }
  
  
	//sorting 2nd diagonal in decreasing order
   for(i=0;i<n;i++)
   {
       int kk=i;
       for(j=n-i-1;0<j;j--,kk++)
       {
           if(a[j][kk]<a[j-1][kk+1])
           {
               int k=a[j][kk];
               a[j][kk]=a[j-1][kk+1];
               a[j-1][kk+1]=k;  
           }
       }
   }
  
  
   //displaying output
   printf("Output:\n");
   for(i=0;i<n;i++)
   {
       for( j=0;j<n;j++)
       {
           printf("%d ",a[i][j]);  
       }
       printf("\n");
   }
  
  
   return 0;
}

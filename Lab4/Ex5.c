#include <stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/

void main()
{
  	int m,n,arr1[10][10],i,j,k,a;
  
	printf("Enter the number of rows: ");
	scanf("%d",&m);
	printf("Enter the number of columns: ");
	scanf("%d",&n);
	printf("Enter the elements of the array- \n");
	for(i = 0; i < m; i=i+1){
		for(j = 0; j < n; j=j+1){
			printf("[%d %d]: ",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("The input matrix is:- \n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
 	printf("\n\n");
 
 	printf ("After arranging the columns in descreasing order n");
 	for (j=0;j<n;++j){
  		for (i=0;i<m;++i){
   				for (k=i+1;k<m;++k){
    			if (arr1[i][j] < arr1[k][j]){
     				a = arr1[i][j];
    				arr1[i][j] = arr1[k][j];
    				arr1[k][j] = a;
    			}
   			}
  		}
 	}

 	printf("\nThe matrix is : \n");
  	for(i=0;i<m;i++){
      printf("\n");
      for(j=0;j<n;j++)
           printf("%d\t",arr1[i][j]);
  }
 printf("\n\n");
 
}

#include<stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/

int main()
{
	int i , j, m , n , a[100][100],min[100],max=0;
		printf("Enter the number of rows: ");
	scanf("%d",&m);
	printf("Enter the number of columns: ");
	scanf("%d",&n);
	printf("Enter the elements of the array- \n");
	for(i = 0; i < m; i=i+1){
		for(j = 0; j < n; j=j+1){
			printf("[%d %d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The input matrix is:- \n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
 	printf("\n\n");
 	
	for(i = 0; i < m; i++){
			min[i] = a[i][0];
			for(j = 0; j < n ; j++){
				if(a[i][j]<min[i]){
					min[i]=a[i][j];
			}
		}
	}
	
	for(i = 0; i < m; i++){
		printf("Minimum element of the row %d is: %d\n",i,min[i]);
}
	
	max = min[0];
	for(i = 1; i < m; i++){
		if(min[i]>max){
			max=min[i];
		}
	}
	printf("Maximum is %d\n",max);
	
	return 0;
}

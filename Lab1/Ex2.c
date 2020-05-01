#include <stdio.h>
/*author: Vo Van Viet - ITDSIU18043*/
int main() {
	
	int counter, num;
	int max, min, product, sum;
	float average;
	
	counter= 0;
	product= 1;
	sum= 0;
	
	do{
		printf("Enter an integer, press 0 to end:");
		scanf("%d",&num);
		
		if (num != 0) {
			product = product * num;
			sum= sum +num;
			counter++;
		}
		
		if (counter ==1 && num!=0) {
			max = min = num;
		}
		
		if (counter >1 && num!=0) {
			if (num>max) max=num;
			if (num<min) min=num;
		}
		
	} while (num != 0);
	
	if (counter !=0) {
		average = (float)sum/ counter;
		printf("Min = %d\n", min);
		printf("Max = %d\n", max);
		printf("Sum = %d\n", sum);
		printf("Product = %d\n", product);
		printf("Average = %.3f\n", average);
	}
	else {
		printf("It's no number has been entered \n");
	}
	
	return 0;
}

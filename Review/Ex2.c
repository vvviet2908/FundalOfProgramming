#include <stdio.h>
/*Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
int main(){
	float unit, price, bill, sur;
	printf("Enter the unit\n");
	scanf("%f",&unit);
	
	if(unit <=50){
		price = unit*0.5;
	}
	else if(unit <=150){
		price = 25 + (unit-50)*0.75;
	}
	else if(unit <=250){
		price=100+(unit-150)*1.2;
	}
	else{
		price=220+(unit-250)*1.5;
	}
	bill=price + price*0.2;
	
	printf("\nTotal electricity bill is %f ",bill);
	
}

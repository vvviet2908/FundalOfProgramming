#include <stdio.h>
 /*author: Vo Van Viet - ITDSIU18043*/
int main()
{ 
char operator;
int num1, num2,result;
int input=scanf("%d%c%d",&num1,&operator,&num2);

if(input<3) {
	printf("input error");
	return 1;
}

switch(operator)
{
	case '+':
		result=num1 + num2;
		printf(" %d + %d = %d",num1,num2,result);
		break;
		
	case '-':
		result=num1-num2;
		printf("%d - %d = %d",num1,num2,result);
		break;
	
	case '*':
		result=num1*num2;
		printf("%d * %d = %d",num1,num2,result);
		break;
	
	case '/':
		result=num1/num2;
		printf("%d / %d = %d",num1,num2,result);
		break;
	default:
		printf("Input error");
		break;
		
	}
}


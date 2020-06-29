#include <stdio.h>
/*Write a  program to input a character and check whether that character is alphabet, digit or special character*/
void Character(char ch){
	if((ch >= 'a' && ch <= 'z' ) || (ch>='A' && ch<= 'Z')){
		printf("\n%c is a character",ch);
	}
	else if(ch >= '0' && ch <= '9' ){
		printf("\n%c is a digit",ch);
	}
	else {
		printf("\n%c is a special character",ch);
	}
	return 0;
};

int main(){
 char ch;
 printf("Enter a character\n");
 scanf("%c",&ch);
 Character(ch);
 return 0;
}





#include <stdio.h> 
#include <string.h> 

const char keypad[10][5] = {"", "", "abc", "def", "ghi", "jkl", 
                               "mno", "pqrs", "tuv", "wxyz"}; 
  

void  printWordsUtil(int number[], int curr_digit, char output[], int n) 
{ 
    int i; 
    if (curr_digit == n) 
    { 
        printf("%s ", output); 
        return ; 
    } 
  

    for (i=0; i<strlen(keypad[number[curr_digit]]); i++) 
    { 
        output[curr_digit] = keypad[number[curr_digit]][i]; 
        printWordsUtil(number, curr_digit+1, output, n); 
        if (number[curr_digit] == 0 || number[curr_digit] == 1) 
            return; 
    } 
} 
  

void printWords(int number[], int n) 
{ 
    char result[n+1]; 
    result[n] ='\0'; 
    printWordsUtil(number, 0, result, n); 
} 
   
int main(void) 
{ 

    int size,i;
    
    printf("enter the amount of numbers:");
    scanf("%d",&size);
	int number[size];
	 for(i = 0; i < size; i++)
    {
            printf("Enter the number: ");
   			scanf("%d", &number[i]);
    }
	 
    int n = sizeof(number)/sizeof(number[0]); 
    printWords(number, n); 
    return 0; 
} 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void findprefix(char**, int, int);
int main(void)
{
    int n, i, text;
    char *name[20];
    printf("Input the number of character each string: ");
    scanf("%d", &text);
    printf("Input how many string you want: ");
    scanf("%d", &n);
    printf("Input string please: \n");
    for(i = 0; i < n; i++)
    {
        name[i] = (char*) malloc(100);
        scanf("%s", name[i]);
    }
    for(i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }
    findprefix(name, n, text);
}
void findprefix(char **name, int count, int number){
    int i, j, t;
    char *word1, *word2;
    char X[number];
    for(i = 0; i < count - 1; i++){
        word1 = name[i];
        word2 = name[i+1];
        for(j = 0; j < count; j++){
            
            if(word1[j] == word2[j]){
                X[j] = word1[j];
            }
        }
    }
    printf("Result is: %s\n", X);
}


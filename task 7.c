#include <stdio.h>

int main() {
    int i, j, space, rows = 5;
    char ch;

    for (i = 1; i <= rows; i++) {
        space = rows - i;               

    
        for (j = 0; j < space * 2; j++) printf(" ");   
        for (j = 0; j < (2 * i - 1); j++) printf("* "); 
        for (j = 0; j < space * 2; j++) printf(" ");  

        
        printf("| ");

        
        for (j = 0; j < space * 2; j++) printf(" ");  
        ch = 'A';
        for (j = 0; j < (2 * i - 1); j++) {       
            printf("%c ", ch);
            ch++;
        }
        for (j = 0; j < space * 2; j++) printf(" ");   

        printf("| ");

        
        for (j = 0; j < space * 2; j++) printf(" ");   
        for (j = 1; j <= (2 * i - 1); j++)           
            printf("%d ", j);
        for (j = 0; j < space * 2; j++) printf(" ");

        printf("\n");
    }

    return 0;
}

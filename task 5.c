#include <stdio.h>

int main() {
    int grid[4][4] = {
        {12, 15, 10, 9},
        {11,  8, 12, 13},
        {14, 13,  9, 7},
        {16, 11, 10, 8}
    };
    int i,j;
   
    printf("Cold spots location:\n");
   
    for( i = 0; i < 4; i++) {
        for( j = 0; j < 4; j++) {

            int value = grid[i][j];
            int isCold = 1; 

            
            if(i > 0 && grid[i-1][j] <= value){
            	isCold = 0;
			}
                
            if(i < 3 && grid[i+1][j] <= value){
            	isCold = 0;
			}
                

        
            if(j > 0 && grid[i][j-1] <= value){
            	isCold = 0;
			}
                

            
            if(j < 3 && grid[i][j+1] <= value){
                isCold = 0;
            }
            
            if(isCold) {
                printf("- At position (%d,%d) with temperature %dC\n", i+1, j+1, value);
            }
        }
    }

    return 0;
}

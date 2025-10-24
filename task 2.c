#include <stdio.h>
int main (){
	int matrix [3][4]={{10,22,35,41},{50,65,73,80},{91,10,11,12}};
	int i,j;
	int max = matrix[0][0];
	int maxrow=0;
	int maxcol=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%4d",matrix[i][j]);
			if (matrix [i][j]>max){
				max = matrix[i][j];
			maxrow=i;
			maxcol=j;
		    }
		}
			printf("\n");
	}
	printf("max number is %d", max);
	printf("\nIndex of max number is at row %d and coloumn %d",maxrow,maxcol);

	return 0;
}

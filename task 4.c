#include<stdio.h>
int main(){
	int seats[3][3]	= {
		{1,0,1},
		{0,0,1},
		{1,1,0}
		};
	int i,j;
	int sum=0;

	
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (seats[i][j]==0){
			
				sum=sum+1;
				printf(" row is %d and seat is %d\n",i+1,j+1);
			}
		
		}
	}	
	printf("sum of total available seat is: %d",sum);
	
	
	
	return 0;
}

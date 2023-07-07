#include<stdio.h>

int main(){
	
		int  i, j ,array1[2][2]={{20,56},{65,98}}, array2[2][2]
		={{48,93},{36,21}}, sum[2][2];
		
		
		for(i=0; i < 2; i++){
			
			for(j=0; j<2; j++){
				
				sum[i][j] = array1[i][j]  + array2[i][j];
				printf("%d ", sum[i][j]); 
			}	
			printf("\n");
			
		}
	
		return 0;
		
	
}

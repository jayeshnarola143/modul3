#include<stdio.h>
int main(){
	int i,j,ans ,a = 1 ;
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=a; j++){
			
			printf("%d",j % 2);
		}
		a++;
		printf("\n");
	}
	
	
}

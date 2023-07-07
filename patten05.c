#include<stdio.h>

int main(){
	int i , j, k,a=8 ,b=1;
	
	for(i=1; i<=5; i++){
		
		for(j=1; j<=a; j++){
			printf(" ");	
		}
		a-=2;
 		for(k=1; k<=b; k++){
			printf("* ");
		}
		b+=2;
		printf("\n");
	}
	 
	return 0;
}

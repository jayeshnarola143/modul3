#include<stdio.h>
int main(){

	int i ,j, k, a=1 ,b=5;
		
	for(i=1; i<=10; i++) {
		if(i<=6){
		
		for(j=1; j<=a; j++){
				printf("* ");
		}
		a++;
		printf("\n");
	}
	else{
		for(j=1; j<=b; j++){
				printf("* ");
		}
		b--;
		printf("\n");
	}
	}
	return 0;
}





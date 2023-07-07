	#include<stdio.h>
int main(){
	int i ,j,ans=1 ;
	char  k='a' ;
						
	
	for(i=1; i<=5; i++){
		for(j =1 ; j<=ans; j++){
			printf("%c ",k++);
		}
		printf("\n");
	ans++;
	}
	
}

#include<stdio.h>
int main(){
	
	int i , ans, num[5] = { 20, 25 , 85,36 , 666};
		
		ans = num[0];		  
	  for(i = 0; i<5; i++){
	  		
	  		if(ans <= num[i]){
	  				ans = num[i];
			  }
	  }		
	  
	  printf("%d", ans);
	
	
}

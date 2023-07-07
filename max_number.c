#include<stdio.h>
int main(){
	int i ,num=4756, ans,a;
		a = num % 10;
		
		for(i=0; i<num; i++ ){
			ans = num %10;
			if(ans>= a){
				a =ans;
			}
			num=num/10;
		}
		printf("%d",a);
		
	
}

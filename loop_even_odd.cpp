#include<stdio.h>
int main(){
	int num,i , ans1=0 ,ans2=0;
	for(i=0; i<10; i++){
		printf("enter your number");
		scanf("%d",&num);
		if(num % 2==0){
				printf("%d is even\n", num);
				ans1= ans1 +num;
		}
		else{
			printf("%d is odd\n", num);
			ans2= ans2 +num;
		}
	}
	
		printf("%d is odd subtraction\n",ans2);
		printf("%d is even subtraction \n",ans1);	
}

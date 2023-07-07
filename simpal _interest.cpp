#include<stdio.h>
	int main(){
		int a ,c,interest_amount;
		float b;
		printf("enter your amount");
		scanf("%d",&a);
		printf("enter your interest rate");
		scanf("%f",&b);
		printf("enter month");
		scanf("%d",&c);
		
		interest_amount = (a *b*c) / 100;
		printf("%d",interest_amount);
		
		return 0;		
		}
				
	

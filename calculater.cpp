#include<stdio.h>
int main(){
		int num, num1,i;
		char a;	
		
		for(i=0; i<100; i++){
		
			printf("enter your number\n");
			
			scanf("%d %c %d", &num, &a, &num1);
			
			
			switch(a)
			{
				case '+':
					printf("%d\n",num + num1);
					break;
				case '-':
					printf("%d\n",num - num1);
					break;	
				case '*':
					printf("%d\n",num * num1);
					break;
				case '/':
					printf("%f\n",(float)num /(float)num1);
					break;		
			}
}
			return 0;
	
}

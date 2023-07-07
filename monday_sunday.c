#include<stdio.h>
int main(){
	int day;
	printf("1 is monday \n");
	printf("2 is tuesday\n");
	printf("3 is wednesday\n");
	printf("4 is thursday\n");
	printf("5 is friday\n");
	printf("6 is saturday\n");
	
	scanf("%d",&day);
	
	switch (day){
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
		
		case 7:
			printf("sunday");			
	
	}
	
	return 0;
		
}

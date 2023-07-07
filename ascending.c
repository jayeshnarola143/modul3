#include<stdio.h>
int main(){
	int addnum ,us1[addnum],us2[5] ,ans[10],i,j ,a;
						
		printf("how many add number\n");
		scanf("%d",&addnum);
		
		printf("enter %d number",addnum);
		for(i=0; i<addnum; i++){
			printf("enter your number\n");
			scanf("%d", &us1[i]);
		}			
				
	printf("please select acsending order and decsending order\n");			
							   
			printf("press 1 to acending order\n");
			printf("press 2 to dcending order\n");
			
			scanf("%d", &a);
			
										   
	if(a == 1){
				   
	   for(i=0; i<addnum; i++){		
	   		for(j =0; j<i; j++){
					if(us1[i] > us1[j]){
						a = us1[i];
						us1[i]= us1[j];
						us1[j]=a; 
		
					}	   				
				   	
			   }	
	 
	   }
	 for(i=0; i<addnum; i++){
	 	  		printf("%d",us1[i]);	
	 }  
}else if(a == 2){
	
	 for(i=0; i<addnum; i++){		
	   		for(j =0; j<i; j++){
					if(us1[i] < us1[j]){
						a = us1[i];
						us1[i]= us1[j];
						us1[j]=a; 
		
					}	   				
				   	
			   }	
	 
	   }
	 for(i=0; i<addnum; i++){
	 	  		printf("%d",us1[i]);	
	 }  
	
}
	   return 0;
}

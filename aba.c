#include<stdio.h>
void main(){
	int i,j;
	int cost;
	printf("Enter the number of item :: ");
	scanf("%d",&i);
	
	for(j=1;j<=i;j++){
		printf("Enter the amount of %d item\n ",j);
		scanf("%d",&cost);
		cost+=cost;
	}
	
	if(cost>=5000){
		if(cost%2 == 1){
			int k = (cost/100)*10;
			printf("Total amount after discount %f",cost-k);
		}else{
				printf("Total amount after discount %f",cost);
		}
		
	}else{
		printf("your amount is %d",cost);
	}

}

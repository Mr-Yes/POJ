#include<stdio.h>

int main(){
	int month=12;
	float sum=0;
	while(month--){
		float bal=0;
		scanf("%f",&bal);
		sum += bal;
		
	}
	printf("$%.2f",sum/12);
	
}

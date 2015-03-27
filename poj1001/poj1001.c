#include<stdio.h>
int main()
{	
	int flag=1;
	while(flag){
		if(flag >1){
			//char tmpChar;
			getchar();
			getchar();
		}
		//printf("The %d Round:\n",flag);
		
		int n;
		int product[201];
		char tmpr[6],r[6];
		int behidePoint;
		int i;
		for(i=0;i<201;i++){
			product[i]=0;
		}
		product[200]=1;
		
		//cin all the 6 digits		
		int thereIsPoint =0;
		for(i=0;i<6;i++){
			if( scanf("%c",tmpr+i) == EOF ){return 0;}
			if(tmpr[i]=='.'){thereIsPoint=1;}
		}
		scanf("%d",&n);
		//if( scanf("%c",r) == EOF ){return 0;}
		//printf("r[%d]: %c\n",0,r[0]);
		//preprocess: find the point and transfer it into a number in r[5]
		int j=0;
		if(thereIsPoint == 0){
			for(i=0,j=0;i<6;i++,j++){
				r[j] = tmpr[i] - '0';
			}
			behidePoint=0;
		}
		else{
			r[0]=0;
			for(i=0,j=1;i<6;i++){
				//scanf("%c",r+i);
				//printf("r[%d]: %c\n",i,r[i]);
				if(tmpr[i]=='.'){
					behidePoint = (5-i)*n;
				}
				else{
					r[j] = tmpr[i] - '0';
					j++;
				}			
			}
		}
		
		
		//for(i=0;i<6;i++){printf("%d",r[i]);}
		//printf("\n");
		//printf("n: %d\n",n);
		//for(i=0;i<5;i++){
			//r[i] -= '0';
			//printf("%d",r[i]);
		//}
		//printf("\n");
		
		int tmpProduct[201];
		for(i=0;i<201;i++){
			tmpProduct[i]=0;
		}
		int loopn=n;
		while(loopn--){			
			for(i=200;i>=0;i--){
				for(j=5;j>=0;j--){
					tmpProduct[i-5+j] += product[i] * r[j];
				}
			}
			for(i=200;i>=1;i--){
				//product[i]=tmpProduct[i];
				int tmpDigit=tmpProduct[i]/10;
				tmpProduct[i] %=10;
				tmpProduct[i-1] += tmpDigit;
			}
			for(i=0;i<201;i++){
				product[i]=tmpProduct[i];
				tmpProduct[i]=0;
			}
			
		}
		
		int productFront=0;
		int productEnd=0;
		for(i=0;i<201;i++){
			if(product[i]!=0){
				productFront=i;
				break;
			}
			if(i==200){ productFront = -1;}
		}
		if(productFront==-1){printf("0\n"); continue;}
		for(i=200;i>=0;i--){
			if(product[i]!=0){
				productEnd=i;
				break;
			}			
		}
				
		//printf("n: %d\n",n);
		//printf("behidePoint: %d\n",behidePoint);
		//printf("productFront: %d\n",productFront);
		//printf("productEnd: %d\n",productEnd);
		if(thereIsPoint == 0){
			for(i=productFront;i<201;i++)
				printf("%d",product[i]);
			printf("\n");
		}
		else{
			if( behidePoint > 200-productFront){
				printf(".");
				for(i=201-behidePoint;i<=productEnd;i++)
					printf("%d",product[i]);
				printf("\n");
			}
			else if(behidePoint == 200-productFront){
				if(productFront==productEnd){
					printf("%d",product[productFront]);
					printf("\n");
				}
				else{
					printf("%d",product[productFront]);
					printf(".");
					for(i=productFront+1;i<=productEnd;i++)
						printf("%d",product[i]);
					printf("\n");
				}
			}
			else if(behidePoint > 200-productEnd){
				for(i=productFront;i<=productEnd;i++){
					if(i==201-behidePoint)
						printf(".");
					printf("%d",product[i]);
				}
				printf("\n");
			}
			else{
				for(i=productFront;i<201-behidePoint;i++){
					printf("%d",product[i]);
				}
				printf("\n");
			}
		}

		
		flag++;
	}
			
	return 0;
}

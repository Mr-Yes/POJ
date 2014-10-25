#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double price[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65 };
    int k;
    scanf("%d",&k);
    while(k--){
        double sum=0;
        int i=0;
        int bookNum;
        for(i=0;i<10;i++){
            scanf("%d",&bookNum);
            sum += bookNum*price[i];
        }
        printf("%.2f\n", sum);

    }
    return 0;
}

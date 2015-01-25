#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>

int main()
{
    double x;
    scanf("%lf",&x);
    double oldV=1;
    double num= -x*x;
    int cnt=1;
    double deno=2;
    double newV=oldV + num/deno;
    while(1){
        cnt ++;
        num *= (-x*x);
        int i;
        for(i=2*(cnt-1)+1;i<2*cnt+1;i++){
                deno *=i;
            //printf("%d %d\n",i,deno);
        }
        oldV = newV;
        double endLoop = num/deno;
        if(endLoop<0)
            endLoop *=-1;
        if(endLoop<0.0000009)
            break;
        newV = oldV + num/deno;
        printf("The %d Round:%lf   EndLoop:%lf\n",cnt,newV,endLoop);
        //printf("Plus:%lf/%d\n",num,deno);
    }
    printf("%.6lf\n",newV);
    return 0;
}

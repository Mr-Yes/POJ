#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
/*
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    //int b[9][9];
    int live[9][9];
    int tmp[9][9];
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            live[i][j]=0;
            tmp[i][j]=0;
            //b[i][j]=0;
        }
    }
    live[4][4]=m;
    //b[4][4]=m;

    while(n--){

        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                int bnow=live[i][j];
                if(bnow>0){
                    tmp[i][j] +=2*bnow;
                    tmp[i-1][j-1] +=bnow;
                    tmp[i-1][j] +=bnow;
                    tmp[i-1][j+1] +=bnow;

                    tmp[i][j-1] +=bnow;
                    tmp[i][j+1] +=bnow;

                    tmp[i+1][j-1] +=bnow;
                    tmp[i+1][j] +=bnow;
                    tmp[i+1][j+1] +=bnow;//tmp[i][j] +=bnow;tmp[i][j] +=bnow;

                }
                //tmp[i][j]=0;
            }
        }
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                //b[i][j] += tmp[i][j]+live[i][j];
                live[i][j]=tmp[i][j];
                tmp[i][j]=0;
            }
        }
    }
    for(i=0;i<9;i++){
       for(j=0;j<9;j++){
            printf("%d",live[i][j]);
            if(j<8) printf(" ");
            else printf("\n");
            }
    }
    return 0;
}

int main()
{
    int a[100][100];
    int r,c;
    scanf("%d %d",&r,&c);
    int i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    int sum=0;
    while(sum<r+c-1){
        //for(i=0;i<=sum;i++){
            for(j=0;j<=sum;j++){
                    if(j<r && sum-j<c)
                        printf("%d\n",a[j][sum-j]);
            }
        //}
        sum++;
    }
    return 0;
}

//2->16
int main()
{
    int n;
    scanf("%d\n",&n);
    int cnt=0;

    while(cnt<n){
        cnt++;

        char re[10005];
        gets(re);
        //gets(re);
        int len = strlen(re);
        //int i=len-1
//if(cnt==12){
        printf("\n%s   %d    ",re,len);
//}
        if(len%4==1)
            printf("1");
        else if(len%4==2){
            switch(re[1]){
                case '0':printf("2");break;
                case '1':printf("3");break;
            }
        }
        else if(len%4==3){
            switch(re[1]){
                case '0':switch(re[2]){
                            case '0':printf("4");break;
                            case '1':printf("5");break;
                        }
                        break;
                case '1':switch(re[2]){
                            case '0':printf("6");break;
                            case '1':printf("7");break;
                        }
                        break;
            }
        }
        if(len<4)
            return 0;

        int bit4=len%4;
        while(bit4<len){
            int value = (re[bit4]-'0')*8 +(re[bit4+1]-'0')*4 + (re[bit4+2]-'0')*2 + (re[bit4+3]-'0');
            if(value<10)
                printf("%d",value);
            else{
                switch(value){
                            case 10:printf("A");break;
                            case 11:printf("B");break;
                            case 12:printf("C");break;
                            case 13:printf("D");break;
                            case 14:printf("E");break;
                            case 15:printf("F");break;
                            }
            }
            bit4 +=4;
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    char re[101];
    gets(re);
    //gets(re);
    int len = strlen(re);
    int i=0;
    while(i<len/2){
        if(re[i]!=re[len-1-i]){
            printf("no");
            return 0;
        }
        i++;
    }
    printf("yes");
    return 0;
}


int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    int pn=4;
    while(pn<n){
        int sum=1;
        int i;
        for(i=2;i<=sqrt(pn);i++){
            if(pn%i==0){
                sum+=i;
                if(pn/i>i){
                    sum+=pn/i;
                }
            }
        }
        if(sum==pn){
            printf("%d ",pn);
            cnt++;
        }
        pn+=2;
    }
    if(cnt==0){
        printf("None");
        return 0;
    }
    //printf("%d",cnt);
    return 0;
}


int main()
{
    double x,a ,e;
    scanf("%lf %lf %lf",&x,&a,&e);
    //printf("\n%lf %lf %lf\n",x,a,e);
    if(x<0)
        x=-x;
    if(x<e){
        printf("%d",0);
        return 0;
    }

    int flag=0;
    int n=0;
    double value=1;
    while(!flag){
        double tmp = x/value;
        //printf("\n%d  %lf\n",n,tmp);
        if(tmp>=e){;}
        else{
            flag=1;
            break;
        }
        value *=a;
        n++;
    }
    printf("%d",--n);
    return 0;
}

int main()
{
    double e;
    scanf("%lf",&e);
    double low=-10;
    double high=10;
    while(high-low>e){
        double mid = (low + high)/2;
        if(e==0){
            printf("2.00000000");
            return 0;
        }
        double x=low;
        double fl=(2*x*x +3)*(x-2);
        x=mid;
        double fm=(2*x*x +3)*(x-2);
        x=high;
        double fh=(2*x*x +3)*(x-2);
        if(fl*fm<=0){
            high = mid;
        }
        else{
            low = mid;
        }
    }
    printf("%.8lf",(low+high)/2);

    return 0;
}
*/
/*
int v1[100000],v2[100000];

int getk(int*v,int len, int k)
{
    if(len == 1)
        return v[0];
    int pivot=0;
    int i;
        for(i=0;i<len;i++){
            pivot += v[i];
        }
        pivot /= len;

    int len1=0,len2=0;
    for(i=0;i<len;i++){
        if(v[i]<=pivot){
            v1[len1]=v[i];
            len1++;
        }
        else{
            v2[len2]=v[i];
            len2++;
        }
    }
    if(k<=len1){
        return getk(v1,len1,k);
    }
    else{
        return getk(v2,len2,k-len1);
    }
}


int main()
{
    int n,k;
    int v[100000];
    scanf("%d %d",&n,&k);
    printf("%d %d",n,k);
    int tmp=n;
    while(tmp--){
        scanf("%d",&v[n-tmp-1]);
    }
    printf("%d", getk(v,n,n+1-k) );
    return 0;
}
*/
/*
int main()
{
    int n;
    scanf("%d",&n);
    int r[1000][6];
    int day[1000];
    int i;
    for(i=0;i<n;i++){
        scanf("%d %d %d %d %d %d",&r[i][0],&r[i][1],&r[i][2],&r[i][3],&r[i][4],&r[i][5]);
        //printf("\n%d %d %d %d %d %d\n",r[i][0],r[i][1],r[i][2],r[i][3],r[i][4],r[i][5]);
    }
    int cnt=0;
    for(i=1;i<n;i++){
        //printf("\n%d %d %d %d %d %d",r[i][0],r[i][1],r[i][2],r[i][3],r[i][4],r[i][5]);
        if(r[i][3]==r[i-1][3] && r[i][4]==r[i-1][4] && r[i][5]==r[i-1][5]);//day[i]=day[i-1];
        else{
            day[cnt]=i;
            cnt++;
        }
    }
    day[cnt]=n; cnt++;
    int tmp=0;
    for(i=0;i<cnt;i++){
        printf("\nThe %d day:",i);
        while(tmp<day[i]){
            printf("\n%d %d %d %d %d %d\n",r[tmp][0],r[tmp][1],r[tmp][2],r[tmp][3],r[tmp][4],r[tmp][5]);
            tmp++;
        }
    }
    */
    //printf("there are %d days",cnt);
/*    int front=0,end=1;
    int sum0=0;
    int sum1=0;
    for(i=0;i<cnt;i++){
        end = day[i];
        int mor=0;
        int eve0=0;//int eve1=0;
        int j=front;
        int evefront=front;
        int eveend=front;
        while(j<end){
            if(  (r[j][0]==7 && mor==0)  ||  ( (r[j][0]==8 && r[j][1]<30 && mor ==0) )  || ((r[j][0]==8 && r[j][1]==30 && r[j][2]==0 && mor ==0))      ){
                mor=1;
                sum0++;
            }
            if(  (r[j][0]>=16 && r[j][0]<21 && eve0==0)  ||  (r[j][0]==21 && r[j][1]<30 && eve0 ==0)  || (r[j][0]==21 && r[j][1]==30 && r[j][2]==0 && eve0==0) ){
                evefront =j;
                eve0=1;
            }
            if(  (r[j][0]>=16 && r[j][0]<21)  ||  (r[j][0]==21 && r[j][1]<30)  || (r[j][0]==21 && r[j][1]==30 && r[j][2]==0) ){
                eveend =j;
            }
            j++;
        }
 //       printf("\nThe %d day:\n",i);
  //      printf("%d %d %d %d %d %d\n",r[evefront][0],r[evefront][1],r[evefront][2],r[evefront][3],r[evefront][4],r[evefront][5]);
  //      printf("%d %d %d %d %d %d\n",r[eveend][0],r[eveend][1],r[eveend][2],r[eveend][3],r[eveend][4],r[eveend][5],r[eveend][6]);
        if(  (r[evefront][0] - r[eveend][0])*60 - r[evefront][1] + r[eveend][1]  >=30  ){
            sum1++;
            //printf("\n the date is %d\n",r[evefront][5]);
        }
        front = end;
    }
    int left0 = (sum0<10)? 10-sum0:0 ;
    int left1 = (sum1<20)? 20-sum1:0 ;
    printf("%d %d",left0,left1);
    return 0;
}
*/
/*
int main()
{
    int  n;
    scanf("%d",&n);
    //printf("%d %d\n",b,t);
    char sum[1000],b[1000];
    int i;
    for(i=0;i<1000;i++){
        sum[i]='0';
    }
    int lensum=0;
    gets(b);
    while(n--){
        gets(b);
        //printf("Read string %s\n",b);
        int lenb=strlen(b);
        //printf("Its len is %d\n",lenb);
        if(lenb>lensum)
            lensum=lenb;
        int j=0;
        for(j=1;j<=lenb;j++){
            sum[1000-j]+= b[lenb-j]-'0';
            //printf("%c",sum[1000-j]);
        }
        //printf("\n");
        for(j=1;j<=lensum+1;j++){
            if(sum[1000-j]>'9'){
                sum[1000-j] -=10;
                sum[1000-j-1]++;
            }
            //printf("%c",sum[j]);
        }
        //printf("\n");

    }
    int index=0;
    while(1){
        if(sum[index] != '0')
            break;
        index++;
        if(index == 1000){printf("0");return 0;}
    }
    while(index<1000){
        printf("%c",sum[index]);
        index++;
    }
    printf("\n");
    return 0;

}
*/
/*
int main()
{
    int b,t;
    scanf("%d %d",&b,&t);
    //printf("%d %d\n",b,t);
    char nb[1000];
    gets(nb);
    //printf("%s\n",nb);
    gets(nb);
    //printf("%s\n",nb);
    int len=strlen(nb);
    //printf("%d\n",len);
    int n10 =0;
    int bwit=1;
    while(len--){
        if(nb[len]>='0' && nb[len]<='9'){
            n10 += (nb[len]-'0')*bwit;
            //printf("%c %d\n",nb[len],n10);
        }
        else if(nb[len]>='A' && nb[len]<='Z'){
            n10 += (nb[len] - 'A'+10)*bwit;
            //printf("%c %d\n",nb[len],n10);
        }

        bwit*=b;
    }
    //printf("%d\n",n10);
    char nt[1000];
    int lent=0;
    while(n10>0){
        int tpleft = n10%t;
        if(tpleft>=0 && tpleft <=9)
            nt[lent]= tpleft +'0';
        else
            nt[lent]= tpleft-10 +'A';
        n10 /=t;
        lent++;
    }
    while(lent){
        printf("%c",nt[--lent]);
    }

}

*/
/*
int isReverse(int num)
{
    int tmp= num;
    int len=0;
    int digt[8];
    while(tmp>0){
        digt[len]=tmp%10;
        tmp /=10;
        len++;
    }
    int j;
    for(j=0;j<len/2;j++){
        if(digt[j]!= digt[len-j-1])
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int root = sqrt(n);
        int i;
        for(i=1;i<=root;i++){
            if(isReverse(i*i)){
                printf("%d ",i*i);
            }
        }
        printf("\n");
    }
    //printf("Hello world!\n");
    return 0;
}
*/

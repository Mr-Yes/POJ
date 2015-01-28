#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int CmpWord(char* a,char* b)
{
    printf("Compare %s and %s\n",a,b);
    if(strcmp(a,b)==0)
        return 0;
    int lena=strlen(a);
    int lenb=strlen(b);
    int i=0;
    while(i<lena && i<lenb){
        if(a[i]<b[i])
            return -1;
        else if(a[i]>b[i])
            return 1;
        else{
            i++;
        }
    }
    return lena>lenb ? 1:-1;
}

int main()
{
    char w[101][51];
    int sorted[101];
    int i;
    for(i=0;i<101;i++)
        sorted[i]=0;
    int num=0;
    while(scanf("%s",w[num])){
        num++;
        printf("%s\n",w[num-1]);
    }
    printf("Read Complete\n");
    int sortedNum=0;
    while(sortedNum<num){
        printf("Print %d word\n",sortedNum);
        char*tmp;
        int Location =0;
        for(i=0;i<num;i++){
            if(sorted[i] == 0){
                tmp = w[i];
                Location = i;
                break;
            }
        }
        int j;
        for(j=i+1;j<num;j++){
            if(sorted[i] == -1)
                continue;
            int cmpRe = CmpWord(tmp,w[j]);
            if(cmpRe == 0){
                sorted[j]=-1;
                sortedNum++;
                continue;
            }
            else if(cmpRe == -1){
                continue;
            }
            else{
                //printf("Find the %d word: %s",sortedNum,tmp);
                tmp = w[j];
                Location = j;
            }
        }
        printf("%s\n",tmp);
        sorted[Location]= -1;
        sortedNum++;
    }
    return 0;
}


/*int main()
{
    //char w[101][51];
    struct Word {
        char w[51];
        char* Next;
    };
    Word Head;
    scanf("%s",Head.w);
    Head.Next = void;

    while(1){
        new Word newp;
        if(!scanf("%s",newp.w))
            break;

        Word ptmp=Head;
        while(ptmp){
            int CmpRe =WordCmp(ptmp.w,newp.w);
            if(  CmpRe == 0 ){
                break;
            }
            else if(CmpRe <0 ){
                ptmp = ptmp.Next;
            }
            else{
                char* exTmp=ptmp.w;
                ptmp.w =
            }
        }
    }
    return 0;
}



int main()
{
    char a[50],b[50];
    int p[100];
    scanf("%s %s",a,b);
    //printf("%s %s\n",a,b);
    int lena=strlen(a);
    int lenb=strlen(b);
    printf("%s %s with length of %d  %d\n",a,b,lena,lenb);
    int i,j;
    for(i=0;i<100;i++)
        p[i]=0;
    for(i=0;i<lena;i++){
        for(j=0;j<lenb;j++){
            //printf("%c * %c \n",a[i],b[j]);
            //printf("p[%d]=%d + (%c *%c ) = %d\n",99-i-j,p[99-i-j],a[i],b[j],p[99-i-j] + (a[i]-'0')*(b[j]-'0'));
            p[99-i-j] += (a[lena-1-i]-'0')*(b[lenb-1-j]-'0');
        }
    }
    int start =0;
    for(i=0;i<100;i++){
        if(p[i]!=0){
            start=i;
            break;
        }
    }
    int extra=0;
    for(i=99;i>=start-1;i--){
        p[i]+=extra;
        if(p[i]>9){
            extra=p[i]/10;
            p[i]=p[i]%10;
        }
        else{
            extra=0;
        }
    }
    for(i=0;i<100;i++){
        if(p[i]!=0){
            start=i;
            break;
        }
    }
    for(i=start;i<100;i++){
        printf("%d",p[i]);
    }
    return 0;
}
*/

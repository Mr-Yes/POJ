
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1024];
    while( (fgets(str,strlen(str),stdin)) ){
        fputs(str,stdout);
        //printf(str);
    }
    if((ferror(stdin))){
         fputs("\nERROR: THE READ ENCOUNTERED AN ERROR!\n",stdout);
         return 0;
    }
    if((feof(stdin))){
        fputs("\nNOTICE: THE READ HAS REACHED THE END OF FILE!\n",stdout);
        return 0;
    }

    //printf("Hello world!\n");
    return 0;
}
*/

#include <stdio.h>

void bubble_a(int *data, int count) {
    int i, last;
    for (last = count-1; last > 0; last--) {
        for (i = 0; i < last; i++){
            int data1 = *(data+i+1);
            int data0 = *(data+i);
            if(data1>data0){
                *(data+i+i) = data0;
                *(data +i) = data1;
            }
        }
    }
}

int main( ){
    int a[5]={5,4,3,2,1};
    bubble_a(a,5);
    return 0;
}




/*
typedef struct ELE *tree_ptr;

struct ELE {
    long val;
    tree_ptr left;
    tree_ptr right;
 };

long traverse(tree_ptr tp)
{
    long rax = 1<<63;
    if(tp == NULL)
        return rax;
    long rbx = (*tp).val;
    long r12 = traverse((*tp).left);
    rax = traverse((*tp).right);

    rax = (r12>=rax)? r12:eax;
    rax = (rbx>rax)? rbx:eax;

    return rax;
}
*/

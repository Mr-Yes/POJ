#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
    float a,b,c,s;
    printf("Please enter 3 reals:\n");
    scanf("%f%f%f",&a,&b,&c);

    printf("%f\n%f\n%f\n",a,b,c);

    if((a+b)>c&&(a+c)>b&&(b+c)>a)
    {
        s=(a+b+c)/2;
        printf("\nArea of the triangle is %f\n",sqrt(s*(s-a)*(s-b)*(s-c)));
    }
    else
        printf("It is not triangle!\n");
    return 0;
}

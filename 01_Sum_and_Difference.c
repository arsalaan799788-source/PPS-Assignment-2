//write a c program to find sum and difference of two numbers
#include <stdio.h>
int main()
{
    int a,b;
    float c,d;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    
    printf("%d %d\n",a+b,a-b);
    printf("%0.1f %0.1f",c+d,c-d);

}

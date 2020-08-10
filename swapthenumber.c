#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("enter the number with a space between them:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b; /* makes b value as a+b-b =a */
    a=a-b; /*makes a value as a+b-a =b */
    printf("numbers after swapping are %d %d",a,b);
    return 0;
}

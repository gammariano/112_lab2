#include<stdio.h>
int main()
{
    double a,b,c,total;
    scanf("%ld" ,&a);
    scanf("%ld" ,&b);
    scanf("%ld" ,&c);
    total=a+b+c;
    if(total>=80&&total<=100)
    {
        printf("A");
    }
    else if(total>=75&&total<=79)
    {
        printf("B+");
    }
    else if(total>=70&&total<=74)
    {
        printf("B");
    }
    else if(total>=65&&total<=69)
    {
        printf("C");
    }
    else if(total>=60&&total<=64)
    {
        printf("C");
    }
    else if(total>=55&&total<=59)
    {
        printf("D+");
    }
    else if(total>=50&&total<=54)
    {
        printf("D");
    }
    else if(total>=0&&total<=49)
    {
        printf("F");
    }
    return 0;
}

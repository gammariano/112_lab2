#include<stdio.h>
int main()
{
    int a,b,c,count;
    char a1[5];
    int i,b1[5];
    scanf("%d %d %d" ,&a,&b,&c);
    if(a>b)
    {
        count=a;
        a=b;
        b=count;
    }
    if(a>c)
    {
        count=a;
        a=c;
        c=count;
    }
    if(b>c)
    {
        count=b;
        b=c;
        c=count;
    }
    scanf("%s" ,a1);

}

#include<stdio.h>
int main()
{
    int a,b,c,i,count;
    char a1[5];
    int b1[5];
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
    for(i=0;i<3;i++)
    {
        if(a1[i]=='A')
        {
            b1[i]=a;
        }
        else if(a1[i]=='B')
        {
            b1[i]=b;
        }
        else if(a1[i]=='C')
        {
            b1[i]=c;
        }
    }
    printf( "%d %d %d", b1[0], b1[1], b1[2] );
    return 0;
}

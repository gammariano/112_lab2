#include<stdio.h>
int main()
{
    int a,b;
    float time,i=0;
    char promo;
    scanf("%c" ,&promo);
    scanf("%f" ,&time);
    a=time;
    b=time*100;
    b%=100;
    if(promo=='A')
    {
        i+=199.00;
        if(time>200)
        {
            a-=200;
            i+=a*3;
            i+=b*3/60.00;
        }
    }
    else if(promo=='B')
    {
        i+=299.00;
        if(time>400)
        {
            a-=400;
            i+=a*2;
            i+=b*2/60.00;
        }
    }
    printf("%.2f",i);
    return 0;
}

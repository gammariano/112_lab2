#include<stdio.h>
int main()
{
    char promo;
    float time,a=199,b=299,i;
    scanf("%c" ,&promo);
    scanf("%.2f" ,&time);
    if(promo=='A')
    {
        if(time<=200)
        {
            printf("%.2f" ,a);
        }
    }
}

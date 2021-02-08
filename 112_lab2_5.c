#include<stdio.h>
int main()
{
    int day,month,i=1,num;
    scanf("%d %d" ,&day,&month);
    switch(month)
    {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 : num=31; break;
        case 2 : num=28; break;
        case 4 :
        case 6 :
        case 9 :
        case 11 : num=30; break;
    }
}

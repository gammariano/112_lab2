#include<stdio.h>
int main()
{
    int date;
    char name,hand1='/',hand2=92;
    scanf("%c" ,&name);
    scanf("%d" ,&date);
    int i;
    i=date%10;
    if((i/5)==1)
    {
        printf("%c" ,hand2);
    }
    if(date%2==1)
    {
       if(name>=65&&name<=73)
       {
           printf("(^_^)");
       }
       else if(name>=74&&name<=82)
       {
           printf("(*o*)");
       }
       else if(name>=83&&name<=90)
       {
           printf("(T_T)");
       }
    }
    else if(date%2==0)
    {
        if(name>=65&&name<=73)
        {
            printf("{@_@}");
        }
        else if(name>=74&&name<=82)
        {
            printf("{*v*}");
        }
        else if(name>=83&&name<=90)
        {
            printf("{X_X}");
        }
    }
    if((i/5)==1)
    {
        printf("%c" ,hand1);
    }
    return 0;

}


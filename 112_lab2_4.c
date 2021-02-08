#include<stdio.h>
#include<math.h>
int main()
{
    int date;
    char name,hand1='/',hand2=92;
    printf("Enter name:");
    scanf("%c" ,&name);
    printf("Enter Birth Date:");
    scanf("%d" ,&date);
    int i;
    i=date%10;
    if((i/5)==1)
    {
        printf("%c" ,hand2);
    }
    if((name-65)%2==0)
    {
       if(date<10)
       {
           printf("(^_^)");
       }
       else if(date>=10&&date<=20)
       {
           printf("(*o*)");
       }
       else if(date>20)
       {
           printf("(T_T)");
       }
    }
    else if((name-65)%2==1)
    {
        if(date<10)
        {
            printf("{@_@}");
        }
        else if(date>=10&&date<=20)
        {
            printf("{*v*}");
        }
        else if(date>20)
        {
            printf("{X_X}");
        }
    }

}


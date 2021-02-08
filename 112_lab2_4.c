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

}


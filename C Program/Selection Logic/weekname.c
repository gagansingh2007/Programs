#include<stdio.h>
int main()
{
    int day;
    printf("enter day");
    scanf("%d",&day);
    if(day==1)
    printf("mon");
    else if(day==2)
    printf("tus");
    else if(day==3)
    printf("wed");
    else if(day==4)
    printf("thus");
    else if(day==5)
    printf("fri");
    else if(day==6)
    printf("sat");
    else if(day==7)
    printf("sun");
    else
    printf("wrong day");
    return 0;
}
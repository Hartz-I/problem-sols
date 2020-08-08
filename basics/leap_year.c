#include<stdio.h>
#include<math.h>

int main()
{
    int year;
    scanf("%d", &year);

    if (year%400==0 || (year%100!=0 && year%4==0))
        printf("year %d is a leap year\n",year);
    else
        printf("year %d is a not a leap year\n",year);
}

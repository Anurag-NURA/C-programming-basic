// To Calculate electricity bill
#include<stdio.h>
#include<conio.h>
int main()
{
    int nou;
    float bill;
    clrscr();

    printf("Enter number of units:");
    scanf("%d", &nou);

    if (nou <= 200)
    {
        bill = nou*5;
    }
    else if (nou > 200 && nou <= 300)
    {
        nou = nou - 200;
        bill = 200*5 +(nou*6);
    }
    else
    {
        nou = nou - 300;
        bill = 200*5 + (300*6) + nou*8;
    }

    printf("Your bill is Rs.%f", bill);

    return 0;
}
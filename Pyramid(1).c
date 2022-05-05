  /* **********
    ****  ****
    ***    ***
    **      **
    *        *
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	int space=0;
	clrscr();
	/*run loop (parent loop) till number of rows*/
	for(i=5;i>0;i--)
	{
		/*print first set of stars*/
		for(j=0;j< i;j++)
		{
			printf("*");
		}
		for(j=0;j< space;j++)
		{
			printf(" ");
		}
		/*print second set of stars*/
		for(j=0;j< i;j++)
		{
			printf("*");
		}
		
		printf("\n");
		space+=2;
	}
    return 0;
}


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

void main()
{
    int hour=0,minute=0,second=0;
    printf("Inter time HH MM SS:\n");
    scanf("%d %d %d",&hour,&minute,&second);
start:
    for(hour;hour<24; hour++)
    {
        for(minute; minute<60; minute++)
        {
            for(second;second<60;second++)
            {
                printf(" \t                                                   %d : %d : %d \n",hour,minute,second);
                Sleep(1000);
                system("cls");

            }

            second=0;
        }
        minute=0;
    }
    goto start;
    getch();
}


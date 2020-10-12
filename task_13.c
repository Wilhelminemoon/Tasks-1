/*  task_13.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a program in C to read any Month Number in integer and display the name of the month and number of days for this month.
*/
#include <stdio.h>

int main(){
    int month;
    int year, days;
    //input
    printf("Enter the month number: ");
    scanf ("%d", &month);
    //if incorrect input
    if (month < 1 || month > 12){
        printf("This month doesn't exist. Try again.");
    }
    //January
    else if ( month == 1){
        printf("\n Name of the month: January ");
        printf("\n Number of days in the month: 31 ");
    }
    //February
    else if ( month == 2){
        printf("Enter the year: "); //entering year to get know if it is leap year
        scanf("%d", &year);
            if ((year%4 == 0) && (year%100 != 0) || year%400 ==0){
                days = 29; //leap year
               }
            else{
                days = 28; //normal year
            }
        printf("\n Name of the month: February ");
        printf("\n Number of days in the month: %d", days);
    }
    //March
    else if ( month == 3){
        printf("\n Name of the month: March ");
        printf("\n Number of days in the month: 31 ");
    }
    //April
    else if ( month == 4){
        printf("\n Name of the month: April ");
        printf("\n Number of days in the month: 30 ");
    }
    //May
    else if ( month == 5){
        printf("\n Name of the month: May ");
        printf("\n Number of days in the month: 31 ");
    }
    //June
    else if ( month == 6){
        printf("\n Name of the month: June ");
        printf("\n Number of days in the month: 30 ");
    }
    //July
    else if ( month == 7){
        printf("\n Name of the month: July ");
        printf("\n Number of days in the month: 31 ");
    }
    //August
    else if ( month == 8){
        printf("\n Name of the month: August ");
        printf("\n Number of days in the month: 31 ");
    }
    //September
    else if ( month == 9){
        printf("\n Name of the month: September ");
        printf("\n Number of days in the month: 30 ");
    }
    //October
    else if ( month == 10){
        printf("\n Name of the month: October ");
        printf("\n Number of days in the month: 31 ");
    }
    //November
    else if ( month == 11){
        printf("\n Name of the month: November ");
        printf("\n Number of days in the month: 30 ");
    }
    //December
    else{
        printf("\n Name of the month: December ");
        printf("\n Number of days in the month: 31 ");
    }    

    return 0;
}
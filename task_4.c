/*
*  task_4.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a C program to find out, if a given year is leap or not.
*/

#include <stdio.h>

int main(){
    int year;
    //input
    printf("Type your year: ");
    scanf("%d", &year);
    //leap is when year is divisible by 4 and not divisible by 100 or year is divisible by 400
    if ( (year%4 == 0) && (year%100 != 0) || year%400 ==0){
        printf("The year %d is leap year.", year);
    }
    //if it is not leap year
    else{
       printf("The year %d is not leap year.", year);
   }
   

    return 0;
}
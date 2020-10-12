/*
*  task_3.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a C program to check whether a given number has the last digit from 0 to 4 or from 5 to 9.
*/

#include <stdio.h>
int main(){
    int num, lastnum;
    //input
    printf("Enter your number: ");
    scanf("\n %d", &num);

    lastnum = num%10; //getting last digit of the number
    printf ("\n This is your number %d and this is the last digit: %d.", num, lastnum);
    //condition whether digit is in range from 0 to 4
    if ( lastnum >= 0 && lastnum <= 4){
        printf("\n The last digit is within the range from 0 to 4.");
    }
    //condition whether digit is in range from 5 to 9
    else {
        printf("\n The last digit is within the range from 5 to 9. ");
    }
    

    return 0;
}
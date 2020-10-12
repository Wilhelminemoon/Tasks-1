/*
*  task_1.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a C program to accept two integers and check whether they are equal or not.
*/

#include <stdio.h>

 int main(){
     int num1, num2;
     //input
     printf("Insert two intigers: \n ");
     scanf("%d %d", &num1, &num2);
    //check whether number 1 and 2 are equal
     if (num1 == num2){
         printf("\n Numbers are equal: %d = %d ", num1, num2);
     }
     //check whther 1 is greater than 2 number
     else if ( num1 > num2){
         printf("\n Numbers are not equal. Number %d is greater than %d .", num1, num2);
     }
     //the last condion where 2 number has to be larger than 1 number
     else{
         printf("Numbers are not equal. Number %d is greater than number %d .", num2, num1);
     }
     
     return 0;
 }


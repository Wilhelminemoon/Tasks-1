/*
*  task_2.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a C program to check whether a given number is even or odd.
*/

#include <stdio.h>

int main(){
    int num;
    //input
    printf("Enter your number to see whether is even or odd: ");
    scanf("\n %d", &num);

    //check, when it is even number has to be divisible by 2 without any remainder
    if (num%2 == 0){
        if (num == 0){  //when number is equal to 0 
            printf("Number 0 is not even nor odd.");
        }
        else{ //normal case with even number 
            printf("Number %d is even.", num);
        }      
    }
    //if number is not even it is odd
    else{
        printf("Number %d is odd.", num);
    }  

    return 0;
}
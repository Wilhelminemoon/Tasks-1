/*
*  task_5.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a C program to find the largest of three numbers.
*/
#include<stdio.h>

int main(){
    int num1, num2, num3;
    //input
    printf("Type your three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    //if all three numbers are equal
    if (num1 == num2 && num2 == num3){
        printf("All three numbers are equal.");
    }
    //geting know whether number 1 is the greatest number
    else if (num1 > num2 && num1>num3){
        printf("\n The largest number is : %d", num1);
        //condition where number 1 is equal to number 2 which are greater than number 3
        if (num1 == num2 && num1>num3){
            printf("\n The largest one are %d and %d which are equal and the smallest is %d ", num1, num2, num3);
        }
         //condition where number 1 is equal to number 3 which are greater than number 2
        else if (num1 == num3 && num1>num2){
            printf("\n The largest one are %d and %d which are equal and the smallest is %d ", num1, num3, num2);
        }
        //getting know whether number 2 is greater than number 3
        else if (num2 > num3){
            printf("\n The second largest number is: %d", num2);
            printf("\n The smallest number is : %d", num3);
        }
        //getting know whether number 3 is greater than number 2
        else if (num3 > num2){
            printf("\n The second largest number is: %d", num3);
            printf("\n The smallest number is : %d" , num2);
        }
        //number 2 and number 3 are equal
        else{
            printf("\n Number %d and number %d are equal.", num2, num3);
        }       
    }
    //getting know whether number 2 is the greatest number
    else if (num2 > num1 && num2 > num3){
        printf("\n The largest number is : %d", num2);
        // number 1 and number 2 are equal and greater than number 3
        if (num1 == num2 && num2>num3){
            printf("\n The largest one are %d and %d which are equal and the smallest is %d ", num1, num2, num3);
        }
        //number 2 and number 3 are equal and greater than number 1
        else if (num2 == num3 && num2>num1){
            printf("\n The largest one are %d and %d which are equal and the smallest is %d ", num2, num3, num1);
        }
        //number 1 is greater than number 3
        else if (num1 > num3){
            printf("\n The second largest number is: %d", num1);
            printf("\n The smallest number is : %d", num3);
        }
        //number 3 is greater than number 1
        else if (num3 > num1){
            printf("\n The second largest number is: %d", num3);
            printf("\n The smallest number is : %d" , num1);
        }
        //numbers 1 and 3 are equal
        else{
            printf("\n Number %d and number %d are equal.", num1, num3);
        }       
    }
    //number 3 is the greatest
    else{
        printf("\n The largest number is : %d", num3);
        //numbers 2 and 3 are equal and 1 is the smallest number
        if (num3 == num2 && num3>num1){
            printf("\n The largest one are %d and %d which are equal and the smallest is %d ", num3, num2, num1);
        }
        //numbers 1 and 3 are equal and number 2 is the smallest
        else if (num1 == num3 && num3>num2){
            printf("\n The largest one are %d and %d which are equal and the smallest is %d ", num1, num3, num2);
        }
        //number 2 is greater than number 1
        else if (num2 > num1){
            printf("\n The second largest number is: %d", num2);
            printf("\n The smallest number is : %d", num1);
        }
        //number 1 is greater than number 2
        else if (num1 > num2){
            printf("\n The second largest number is: %d", num1);
            printf("\n The smallest number is : %d" , num2);
        }
        //numbers 1 and 2 are equal
        else{
            printf("\n Number %d and number %d are equal.", num2, num1);
        }       
    }


    return 0;
}
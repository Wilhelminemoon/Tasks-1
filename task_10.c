/*  task_10.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a C program to check whether a character is an alphabet, digit or special character.
*/
#include <stdio.h>

int main(){
    char unknown;
    //input
    printf("Enter please your character to get know whether is an alphabet, digit or special character: ");
    scanf("%c", &unknown);
    //if character is in range of 65 to 90 = uppercase letter
    if (unknown >= 65 && unknown <= 90 ){
        printf("Your charcter: %c is an alphabet - uppercase letter", unknown);
    }
    //if character is in range of 97 to 122 = lowercase letter
    else if ( unknown >= 97 && unknown <= 122 ) {
        printf("Your charcter: %c is an alphabet - lowercase letter", unknown);       
    }
    //if character is in range of 48 to 57 = digit
    else if (unknown >= 48 && unknown <= 57 ){
        printf("Your character: %c is a digit.", unknown);
    }
    //no in these ranges = special character
    else{
        printf("Your character : %c is a special character. Number of character in ASCII: %d .", unknown, unknown);
    }
    

    return 0;
}
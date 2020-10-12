/*  task_11.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a C program to check whether an alphabet is a vowel, consonant, or something else.
*/
#include <stdio.h>
int main(){
    char alphabet;
    //input
    printf("Please enter your alphabet to get know whether is a vowel, consonant or something else: ");
    scanf("%c", &alphabet);
    //if alphabet is a vowel = a , e , i , o , u
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U'){
        printf("Your alphabet : %c is a vowel.", alphabet);
    }
    //if alphabet is a consonant
    else if (alphabet >= 65 && alphabet <= 90 || alphabet >= 97 && alphabet <= 122 && 
             alphabet != 97 && alphabet != 101 && alphabet != 105 && alphabet != 111 && alphabet != 117 && alphabet != 65 && alphabet != 69 && alphabet != 73 && alphabet != 79 && alphabet != 85 ){
             printf("Your alphabet: %c is a consonant.", alphabet);
             }
    //alphabet is something else         
    else{
        printf("Your character: %c is something else than alphabet.", alphabet);
    }


    return 0;
}
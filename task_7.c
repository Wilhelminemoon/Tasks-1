/*
*  task_7.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a C program to calculate the root of a Quadratic Equation.
*/
// problem with linking math library/ sqrt() function: gcc task_7.c -o task_7 -lm

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double x, x1, x2, discriminant, temp1, temp2;
    //input
    printf("To calculate your quadratic equation [ax^2 + bx + c = 0] you have to determine: a , b and c \n ");
    scanf(" %lf %lf %lf", &a, &b, &c);
    //discriminant
    discriminant = b*b - 4*a*c ;
    //solving quadratics
    //discriminant is negative
    if (discriminant < 0){
        printf("Solution set is empty, discriminant can't be negative number.");
    }
    //discriminant = 0
    else if (discriminant == 0){
        x = (-b)/(2*a);
        printf("Root of the quadratic equation is : %lf", x);
    }
    //discriminant > 0
    else if (discriminant > 0){
        temp1 = (-b + sqrt(discriminant)) / (2*a) ;
        temp2 = (-b - sqrt(discriminant)) / (2*a) ;
        printf("Roots of quadratic equations are: x1 = %lf and x2 = %lf .", temp1, temp2) ;
        }
    //incorrect discriminant
    else {
        printf("Your input is incorrect, roots are not real.");
    }
    
 
    return 0;
}




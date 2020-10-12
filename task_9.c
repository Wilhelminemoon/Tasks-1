/*  task_9.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a C program to check whether a triangle is Equilateral, Isosceles, Scalene or general.
*/
#include <stdio.h>

int main(){
    float first, second, third;
    //input
    printf("To calculate whether your trinagle is Equilateral, Isosceles or Scalene you have to enter length of its sides:  ");
    printf("\n First side : ");   //first side of triangle
    scanf("%f", &first);
    printf("\n Second side : ");  //second side of triangle
    scanf("%f", &second);
    printf("\n Third side : ");   //third side of triangle
    scanf("%f", &third);
    
    //if all sides are equal 
    if ( first == 0 || second == 0 || third == 0){
        printf("\n Length of the side cannot be equal to 0.");
    }
    //Equilateral = if three sides are equal
    else if (first == second && second == third || first == third){
        printf("\n Length of all sides are equal so your triangle is EQUILATERAL.");
    }
    //Isosceles = if two sides are equal and third is different
    else if (first == second || first == third || second == third){
        printf("\n Length of two sides are equal and one side is different so your triangle is ISOSCELES.");
    }
    //Scalene = if all three sides are different 
    else{
        printf("\n Length of all sides are different so your triangle is SCALENE.");
    }

    return 0;
}
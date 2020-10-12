/*
*  task_6.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
*/
#include <stdio.h>

int main(){
    float point1, point2;
    //input
    printf("Insert your coordinate points:  ");
    scanf("%f %f", &point1, &point2);
    //first quadrant
    if (point1 >= 0 && point2 >= 0){
        //if points are equal coordinate point is centre
        if (point1 == 0 && point2 == 0){
        printf("Coordinate point is in the centre.");
        }
        //point is on the axis
        else if (point1 == 0 || point2 == 0) {
            printf("Your coordinate point: %f , %f lays on the axis.", point1, point2);
        }
        //in quadrant
        else{
            printf(" Your coordinate point: %f , %f is in the FIRST Quadrant.", point1, point2);   
        }     
    }
    //second quadrant
    else if (point1 < 0 && point2 >= 0){
        //point is on the axis
        if (point2 == 0){
            printf("Your coordinate point: %f , %f lays on the axis.", point1, point2);
        }
        //in quadrant
        else{
        printf(" Your coordinate point: %f , %f is in the SECOND Quadrant.", point1, point2);    
        }    
    }
    //third quadrant
    else if (point1 < 0 && point2 < 0){
        printf(" Your coordinate point: %f , %f is in the THIRD Quadrant.", point1, point2);        
    }
    else{
        //point is on the axis
        if (point1 ==0){
            printf("Your coordinate point: %f , %f lays on the axis.", point1, point2);
        }
        //in quadrant
        else{
            printf("Your coordinate point: %f , %f is in the FOURTH Quadrant.", point1, point2);
        }
    }

    return 0;
}
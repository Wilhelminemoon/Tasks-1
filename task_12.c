/*  task_12.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken 
        from the keyboard and display the total amount to pay to the customer. The charge are as follows:
                kWh                                      Charge/unit
                up to 199                                @1.20
                200 and above but less than 400          @1.50
                400 and above but less than 600          @1.80
                600 and above                            @2.00
*/
#include <stdio.h>

//structure of customer
struct customer{
        char name[50];
        int id;
        float unit;
    } s;

int main(){
    float total;
    //input
    printf("Insert information about you: ");
    printf("\n Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("\n ID: ");
    scanf("%d", &s.id);
    printf("\n Consumed units (kWh): ");
    scanf("%f", &s.unit);
    //to print
    printf("\n Name: %s", s.name);
    printf("\n ID: %d", s.id);
    printf("\n Consumed units: %f  kWh", s.unit);

    //if kWh < 200
    if (s.unit < 200){
        total = (s.unit * 1.20) ;
        printf("\n Total prize for consumed units you have to pay: %f .", total);
    }
    //if kWh >= 200 and kWh <400
    else if (s.unit >= 200 && s.unit < 400){
        total = (s.unit * 1.50) ;
         printf("\n Total prize for consumed units you have to pay: %f .", total);
    }
    //if kWh >= 400 and kWh <600
    else if (s.unit >= 400 && s.unit < 600) {
        total = (s.unit * 1.80) ;  
         printf("\n Total prize for consumed units you have to pay: %f .", total);    
    }
    //if kWh >= 600
    else if ( s.unit >= 600){
        total = (s.unit * 2.00) ;
         printf("\n Total prize for consumed units you have to pay: %f .", total);
    }
    //wrong input
    else{
        printf("You have entered wrong type of input, try again.");
    }
    

    return 0;
}
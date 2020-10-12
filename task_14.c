/*  task_14.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a program, which reads step by step numbers representing day, month and year, and displays, if the date represents a real date or not.
*/
#include <stdio.h>

int main(){
    int day, month, year, days;
    //input
    printf("Please enter information about date just in numbers.");
    printf("\n Day: ");
    scanf("%d", &day);
    printf("\n Month: ");
    scanf("%d", &month);
    printf("\n Year: ");
    scanf("%d", &year);

    //wrong input of day
    if (day < 0 || day > 31){
        printf("\n You have entered wrong number for day. Non-real date.");
    }
    //wrong input of month
    else if (month < 1 || month > 12){
        printf("\n This month doesn't exist. Non-real date.");
    }
    //wrong input of year - negative
    else if (year < 0){
        printf("\n Year cannot be negative. Non-real date.");
    }
    //wrong input of year - already non existing
    else if (year > 2020){
        printf("This year already doesn't exist but hopefully it will.");
    }
    //January
    else if ( month == 1){
        if (day <= 31){
            printf("\n This date : %d.%d. %d represents real date.", day, month, year);
        } 
    } 
    //February 
    else if ( month == 2){
            if ((year%4 == 0) && (year%100 != 0) || year%400 ==0){
                if (days <= 29){ //leap year
                   printf("\n This date : %d.%d. %d represents real date.", day, month, year);
                }
            }
            else{
                if (days == 28){ //normal year
                    printf("\n This date : %d.%d. %d represents real date.", day, month, year);
                }
                else{
                    printf("\n This date : %d.%d. %d represents non-real date.", day, month, year);
                }
            }
    }
    //March
    else if ( month == 3){
       if (day <= 31){
            printf("\n This date : %d.%d. %d represents real date.", day, month, year);
        }   
    }
    //April
    else if ( month == 4){
        if (day <= 30){
            printf("\n This date : %d.%d. %d represents real date.", day, month, year);
        }   
    }
    //May
    else if ( month == 5){
       if (day <= 31){
            printf("\n This date : %d.%d. %d represents real date.", day, month, year);
        }   
    }
    //June
    else if ( month == 6){
       if (day <= 30){
            printf("\n This date : %d.%d. %d represents real date.", day, month, year);
        }   
    }
    //July
    else if ( month == 7){
       if (day <= 31){
            printf("\n This date : %d.%d. %d represents real date.", day, month, year);
        }   
    }
    //August
    else if ( month == 8){
        if (day <= 31){
            printf("\n This date : %d.%d. %d represents real date.", day, month, year);
        }   
    }
    //September
    else if ( month == 9){
       if (day <= 30){
            printf("\n This date : %d.%d. %d represents real date.", day, month, year);
        }   
    }
    //October
    else if ( month == 10){
       if (day <= 31){
            printf("\n This date : %d.%d. %d represents real date.", day, month, year);
        }   
    }
    //November
    else if ( month == 11){
       if (day <= 30){
            printf("\n This date : %d.%d. %d represents real date.", day, month, year);
        }   
    }
    //December
    else if (month == 12) {
       if (day <= 31){
            printf("\n This date : %d.%d. %d represents real date.", day, month, year);
        }   
    } 
    //non-real date 
    else{
        printf("\n This date : %d.%d. %d represents non-real date.", day, month, year);
    }  


    return 0;
}
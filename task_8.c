/*  task_8.c
*  version : ldd  2.31
*            gcc  9.3.0
*  auhor: Lucia Cengelova
*  e-mail: lucy.cen12@gmail.com
*  task: Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division. The divisions are defined as follows:
            a. first, if the percentage is 75% or more,
            b. second, if the percentage is 50% or more up to 75%,
            c. pass, if the percentage is 33% or more up to 50%,
            d. otherwise it is fail.
*/
#include <stdio.h>

//structure of student
struct student{
        char name[50];
        int roll;
        int mark1, mark2, mark3;
    } s;

int main(){
    int total_marks; 
    int percentage;
    //input
    printf("Please enter information about you: ");
    printf("\n Enter your name: ");
    fgets(s.name, sizeof(s.name), stdin);
    //roll number
    printf("\n Enter your roll number: ");
    scanf("%d", &s.roll);
    //first subject
    printf("\n Enter marks of first subject: ");
    scanf("%d", &s.mark1);
    //second subject
    printf("\n Enter marks of second subject: ");
    scanf("%d", &s.mark2);
    //third subject
    printf("\n Enter marks of your third subject: ");
    scanf("%d", &s.mark3);

    total_marks = s.mark1 + s.mark2 + s.mark3;
    percentage = total_marks/3;
    //to print
    printf("\n Name: %s", s.name);
    printf("\n Roll number: %d", s.roll);
    printf("\n Marks in first subject: %d", s.mark1);
    printf("\n Marks in second subject: %d", s.mark2);
    printf("\n Marks in third subject: %d", s.mark3);
    printf("\n Total number of marks: %d ", total_marks);
    printf("\n Percentage: %d ", percentage);

    //first case
    if (percentage >= 75){
        printf("\n Division = First (with percentage of: %d", percentage);
    }
    //second case
    else if (percentage >= 50 && percentage < 75){
        printf("\n Division = Second (with percentage of: %d)", percentage);
    }
    //third case
    else{
        printf("\n Division = Third (with percentage of : %d", percentage);
    }


    return 0;
}
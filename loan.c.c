//Loan Application form
// Using if....else
/*
Author:Augustine Owaya
Date:30/9/2024
*/
#include <stdio.h>
int main (){
    int age;
    int income ;
    
    printf ("Enter your age =");
    scanf ("%d",&age);
    
    printf ("Enter your annual income =");
    scanf ("%d",&income);
    
    if(age>=21 && income>= 21000) {
        printf ("Congratulations you qualify for the loan");
    } else {
        printf ("Unfortunately,we're unable to offer you a loan at this time");
    }
    
    
    
    return 0;
}
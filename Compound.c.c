// Calculating compound interest
/*
Author:Augustine Owaya
Date:27/9/2024
*/
#include <stdio.h>
#include <math.h>

int main() {
 int P,R,t,n;
 float A,CI;
 
printf ("Enter the principal amount=");
 scanf("%d",&P);
 
 printf ("Enter the rate =");
 scanf ("%d",&R);
 
 printf ("Enter the time of years =");
 scanf ("%d",&t);
 
 printf ("Enter the number of times interest is compounded =");
 scanf ("%d",&n);
 
 //A=P*pow((1+R/100),N);
 CI= P * pow((1+(R /(n * 100))), n * t);
 
 printf ("\nCompound Interest=%.2f",CI);
// printf ("\nTotal Amount = %.2f",A);
 

    return 0;
}
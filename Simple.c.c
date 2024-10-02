// Calculating Simple Interest
/*
Author:Augustine Owaya
Date:25/9/2024
*/
#include <stdio.h>

int main() {
   float p,r,t,si;
   
   printf("enter the principal =\n");
   scanf("%f",&p);
   
   printf ("enter the rate =\n");
   scanf("%f",&r);
   
   printf ("enter the time =\n");
   scanf("%f",&t);
   
   si=(p*r*t)/100;
   printf ("simple interest is %.2f\n",si);

    return 0;
}
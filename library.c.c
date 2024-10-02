//Using if......else if.......else
/*
Author:Augustine Owaya
Date:30/9/2024
*/
#include <stdio.h>

int main() {
    
    int bookID,dueDate,returnDate,daysOverdue;
    int fineRate,fineAmount;
    
    printf ("Enter the book ID:");
    scanf ("%d",&bookID);
    printf ("Enter the due date:");
    scanf ("%d",&dueDate);
    printf ("Enter the return date:");
    scanf ("%d",&returnDate);
    
    //Days overdue
    daysOverdue=returnDate-dueDate;
    
    if(daysOverdue<=7) {
        fineRate=20;
    } else if (daysOverdue<=14) {
        fineRate=50;
    }else {
        fineRate=100;
    }
    //Fine amount 
    fineAmount=fineRate*daysOverdue;
    
    printf ("\nBook ID:%d",bookID);
    printf ("\nDue date:%d",dueDate);
    printf ("\nReturn date:%d",returnDate);
    printf ("\nDays overdue:%d",daysOverdue);
    printf ("\nFine rate:ksh%d",fineRate);
    printf ("\nFine amount:ksh%d",fineAmount);

    return 0;
}


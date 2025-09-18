#include<stdio.h>
#include<conio.h>

int main(){
    printf("**** ELECTRICITY BILL ****\n");

    int c_id;
    float unit, bill = 0, surcharge = 0;
    char name[50];

    // Input
    printf("ENTER THE NAME OF CUSTOMER: ");
    scanf("%s", name);

    printf("ENTER THE Customer ID: ");
    scanf("%d", &c_id);

    printf("ENTER THE Units Consumed: ");
    scanf("%f", &unit);

    // Bill Calculation
    if (unit <= 199) {
        bill = unit * 1.20;
    } else if (unit >= 200 && unit < 400) {
        bill = unit * 1.50;
    } else if (unit >= 400 && unit < 600) {
        bill = unit * 1.80;
    } else {
        bill = unit * 2.00;
    }

    // Apply surcharge if bill > 400
    if (bill > 400) {
        surcharge = bill * 0.15;
        bill += surcharge;
    }

    // If minimum bill less than 100
    if (bill < 100) {
        bill = 100;
    }

    // Output
    printf("\n--- BILL DETAILS ---\n");
    printf("Customer Name : %s\n", name);
    printf("Customer ID   : %d\n", c_id);
    printf("Units Used    : %.2f\n", unit);
    printf("Base Bill     : %.2f\n", bill - surcharge);
    printf("Surcharge     : %.2f\n", surcharge);
    printf("Total Bill    : %.2f\n", bill);

    getch();
    return 0;
}


//1.Create a simple JavaScript function called calculateTotal that takes two numbers: itemPrice and quantity, and returns the total bill amount using arithmetic operators.

#include <stdio.h>

float calculateTotal(float itemPrice, int quantity) {
    return itemPrice * quantity;
}

int main() {
    float itemPrice, totalBill;
    int quantity;

    printf("Enter item price: ");
    scanf("%f", &itemPrice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    totalBill = calculateTotal(itemPrice, quantity);

    printf("Total Bill Amount = %.2f\n", totalBill);

    return 0;
}

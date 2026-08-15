//2.Build a Flipkart-style discount calculator: given product price, discount percentage, and a boolean isMember, use arithmetic and logical operators to calculate the final price (apply an extra 5% off if isMember is true).


#include <stdio.h>

float calculateFinalPrice(float price, float discountPercent, int isMember) {
    float finalPrice;

    finalPrice = price - (price * discountPercent / 100);

    if (isMember) {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    return finalPrice;
}

int main() {
    float price, discountPercent, finalPrice;
    int isMember;

    printf("Enter product price: ");
    scanf("%f", &price);

    printf("Enter discount percentage: ");
    scanf("%f", &discountPercent);

    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);

    finalPrice = calculateFinalPrice(price, discountPercent, isMember);

    printf("Final Price = %.2f\n", finalPrice);

    return 0;
}

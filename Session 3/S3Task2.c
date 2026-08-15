#include <stdio.h>

int main() {
    const float GST_RATE = 18.0;
    float basePrice;

    printf("Enter Base Price:");
    scanf("%f",&basePrice);

    float gstAmount = (basePrice * GST_RATE) / 100;
    float finalPrice = basePrice + gstAmount;

    printf("Base Price: %.2f\n", basePrice);
    printf("GST Rate: %.2f\n", GST_RATE);
    printf("GST Amount: %.2f\n", gstAmount);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}

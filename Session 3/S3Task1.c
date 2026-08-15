#include <stdio.h>

int main() {
    // Variable declarations
    char productName[] = "Wireless Mouse";
    float price = 799.99;
    double rating = 4.5;

    // Printing values with their data types
    printf("Product Name: %s (Data Type: string)\n", productName);
    printf("Price: %.2f (Data Type: float)\n", price);
    printf("Rating: %.1f (Data Type: double)\n", rating);

    return 0;
}

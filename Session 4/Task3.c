//3.Write a function isEligibleForOffer that takes a user's age and total order value, and returns true if the user is 18 or older AND the order value is above 500, otherwise false.<br><br><em><strong>Hint:</strong> Use relational and logical operators together.</em>


#include <stdio.h>

int isEligibleForOffer(int age, float orderValue) {
    return (age >= 18 && orderValue > 500);
}

int main() {
    int age;
    float orderValue;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter total order value: ");
    scanf("%f", &orderValue);

    if (isEligibleForOffer(age, orderValue)) {
        printf("Eligible for the offer (True)\n");
    } else {
        printf("Not eligible for the offer (False)\n");
    }

    return 0;
}

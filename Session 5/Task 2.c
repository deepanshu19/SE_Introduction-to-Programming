//Build a Zomato-style food suggestion tool: take the user's preferred meal time ('breakfast', 'lunch', 'dinner', or 'snack') and use a switch-case statement to suggest a popular dish for that time. If the input doesn't match any meal, suggest 'Try some fruits!'.

#include <stdio.h>

int main() {
    int meal;

    printf("Select Meal Time:\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &meal);

    switch (meal) {
        case 1:
            printf("Suggested Dish: Masala Dosa\n");
            break;

        case 2:
            printf("Suggested Dish: Paneer Butter Masala with Naan\n");
            break;

        case 3:
            printf("Suggested Dish: Biryani\n");
            break;

        case 4:
            printf("Suggested Dish: Samosa\n");
            break;

        default:
            printf("Try some fruits!\n");
    }

    return 0;
}

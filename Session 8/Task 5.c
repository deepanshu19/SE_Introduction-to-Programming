//5.Refactor an existing function you wrote above to make it reusable for both product names and usernames (for example, a function that capitalizes the first letter of any string).<br><br><em><strong>Constraint:</strong> The refactored function should work for any string input, not just a specific use case.</em>

#include<stdio.h>

void capitalizeFirstLetter(char str[]){
if(str[0] >= 'a' && str[0] <= 'z'){
    str[0] = str[0] - 32; // Convert lowercase to uppercase
}

}

int main(){

char product[] = "laptop";
char username[] = "deepanshu";
char city[] = "ahmedabad";

capitalizeFirstLetter(product);
capitalizeFirstLetter(username);
capitalizeFirstLetter(city);

printf("Product: %s\n", product);
printf("Username: %s\n", username);
printf("City: %s\n", city);

return 0;
}

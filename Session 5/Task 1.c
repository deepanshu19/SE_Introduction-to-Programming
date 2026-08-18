//Create a simple IPL Fan Bot that takes your favorite IPL team name as input and uses if-else-if statements to print a unique cheer message for each team (e.g., 'Go Mumbai Indians!', 'Chennai Super Kings for the win!'). If the team is not recognized, print 'Team not found!'

#include <stdio.h>

int main() {
    int team;

    printf("Select your favorite IPL team:\n");
    printf("1. Mumbai Indians\n");
    printf("2. Chennai Super Kings\n");
    printf("3. Royal Challengers Bengaluru\n");
    printf("4. Kolkata Knight Riders\n");
    printf("5. Rajasthan Royals\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &team);

    if (team == 1) {
        printf("Go Mumbai Indians!\n");
    }
    else if (team == 2) {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (team == 3) {
        printf("Ee Sala Cup Namde!\n");
    }
    else if (team == 4) {
        printf("Korbo Lorbo Jeetbo Re!\n");
    }
    else if (team == 5) {
        printf("Halla Bol, Rajasthan Royals!\n");
    }
    else {
        printf("Team not found!\n");
    }

    return 0;
}

//2.Create a menu-driven console app that lets the user: 1) View your favorite 3 IPL teams, 2) Add a new team, 3) Exit. Use a while loop to keep showing the menu until the user chooses Exit.<br><br><em><strong>Hint:</strong> Use input() (or Scanner in Java) to get the user's choice each time.</em>

#include<stdio.h>

int main(){

char teams[10][50] = {
    "Chennai Super Kings",
    "Mumbai Indians",
    "Royal Challengers Bengaluru"
};

int teamCount = 3;
int choice;

while(1){
        printf("\n===== IPL Team Menu =====\n");
        printf("1. View Favorite IPL Teams\n");
        printf("2. Add a New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("\nFavourite IPL Teams:\n");
                for(int i=0;i<teamCount;i++)
                {
                    printf("%d. %s\n",i+1,teams[i]);
                }
            break;

            case 2:
                if(teamCount<10){
                    getchar(); // remove newline

                    printf("Enter new team name: ");
                    fgets(teams[teamCount],50,stdin);

                    // Remove newline manually
                    int i=0;
                    while(teams[teamCount][i] != '\0'){
                        if(teams[teamCount][i] == '\n'){
                            teams[teamCount][i] = '\0';
                            break;
                        }
                        i++;
                    }

                    teamCount++;
                    printf("Team added successfully!\n");
                }
            break;

            case 3:
                printf("Exiting program...\n");
                return 0;

             default:
                printf("Invalid choice! Please try again.\n");
        }
}

return 0;

}

//3.Build a 'Guess the Song' game like Spotify — the program randomly picks a song name from a list and asks the user to guess it. Use a do-while loop so the user can keep guessing until they get it right.<br><br><em><strong>Constraint:</strong> Use at least 3 song names of your choice.</em>

#include <stdio.h>

int main() {
    char songs[3][20] = {
        "Believer",
        "Perfect",
        "ShapeOfYou"
    };

    char guess[20];
    int number;
    int i, correct;

    printf("=== Guess the Song Game ===\n");

    printf("Enter any number: ");
    scanf("%d", &number);

    int songIndex = number % 3;

    do {
        printf("Guess the song: ");
        scanf("%s", guess);

        correct = 1;
        i = 0;

        while (guess[i] != '\0' || songs[songIndex][i] != '\0') {
            if (guess[i] != songs[songIndex][i]) {
                correct = 0;
                break;
            }
            i++;
        }

        if (!correct) {
            printf("Wrong guess! Try again.\n");
        }

    } while (!correct);

    printf("Congratulations! You guessed the song: %s\n",
           songs[songIndex]);

    return 0;
}

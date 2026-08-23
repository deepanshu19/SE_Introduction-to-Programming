//3.Create a pattern that prints a pyramid of stars (*) with 6 rows, centered like the loading animation you see on BookMyShow when a page is loading.<br><br><em><strong>Hint:</strong> Use spaces to align the stars in the center for each row.</em>


#include <stdio.h>

int main() {
    int rows = 6;

    for(int i=1;i<=rows;i++){

        //Print spaces
        for(int j=1;j<=rows-i;j++){
            printf(" ");
        }

        //Print Stars
        for(int k =1;k<=(2*i-1); k++){
            printf("*");
        }

        printf("\n");

    }

    return 0;
}

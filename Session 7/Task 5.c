//5.Modify your pyramid pattern code to accept the number of rows as user input, so the user can set the height of the pyramid before printing.

#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows to print:");
    scanf("%d",&rows);

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

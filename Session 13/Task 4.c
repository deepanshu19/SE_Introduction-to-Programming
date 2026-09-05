/*
4.Write a program that reads all song names from playlist.txt and prints only those that contain the word 'love' (case-insensitive).<br><br><em><strong>Hint:</strong> Use the 'in' keyword or equivalent string method for filtering.</em>
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char buffer[255];

    file = fopen("playlist.txt","r");

    if(file == NULL){
        printf("Error opening file.\n");
        return 0;
    }

     printf("Words containing 'love':\n");

     while(fscanf(file,"%s",buffer) != EOF){
        if(strstr(buffer,"love") != NULL ||
           strstr(buffer,"Love") != NULL ||
           strstr(buffer,"LOVE") != NULL
           ){
            printf("%s\n", buffer);
           }
     }

     fclose(file);

    return 0;
}

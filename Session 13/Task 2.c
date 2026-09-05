//2.Open playlist.txt in read mode (r) and display each song name on a separate line in the console.

#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("playlist.txt","r");

    if(file == NULL)
    {
       printf("Error opening file.\n");
        return 0;
    }

    printf("Contents of playlist.txt:\n");

    while((ch=fgetc(file)) != EOF){
        printf("%c",ch);
    }

    fclose(file);

    return 0;
}

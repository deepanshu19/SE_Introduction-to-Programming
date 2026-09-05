//1.Create a file called playlist.txt and write the names of your top 3 favorite songs from Spotify into it using write mode (w).

#include<stdio.h>

int main()
{
    FILE *file;

    file = fopen("playlist.txt","w");

    if(file == NULL){
        printf("Error creating file.\n");
        return 0;
    }

    fprintf(file,"Believer\n");
    fprintf(file,"Perfect\n");
    fprintf(file,"Shape of You\n");

    fclose(file);

     printf("Playlist saved successfully in playlist.txt\n");
    return 0;
}

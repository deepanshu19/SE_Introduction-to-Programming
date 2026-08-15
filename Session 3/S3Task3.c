#include <stdio.h>

int main() {
    char playlistName[100];
    int totalSongs;
    float avgDuration;


    printf("Enter playlist name: ");
    fgets(playlistName, sizeof(playlistName), stdin);

    printf("Enter total number of songs: ");
    scanf("%d", &totalSongs);

    printf("Enter average song duration (in minutes): ");
    scanf("%f", &avgDuration);


    printf("\nYour favorite Spotify playlist %s contains %d songs with an average duration of %.2f minutes per song.\n",
           playlistName, totalSongs, avgDuration);

    return 0;
}

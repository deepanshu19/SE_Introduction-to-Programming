//2.Create a 2D array called playlistRatings to store ratings for 3 Spotify playlists over 5 days (rows = playlists, columns = days). Fill it with sample numbers and print the ratings for the second playlist.

#include<stdio.h>

int main(){


int playlistRatings[3][5] = {
    {4,5,3,4,5}, // Playlist 1
    {3,5,4,4,2}, // Playlist 2
    {4,1,5,1,2}, // Playlist 3
};

 printf("Ratings for the Second Playlist:\n");

// Print ratings of the second playlist (row index 1)
for(int day=0;day<5;day++){
    printf("Day %d: %d\n",day+1,playlistRatings[1][day]);
}

return 0;
}

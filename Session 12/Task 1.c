//1.Declare a structure named Playlist to store details of a song: title (string), artist (string), and duration in seconds (integer). Initialize one Playlist variable with your favorite song's details and print each field.

#include<stdio.h>
#include<string.h>

struct Playlist {

    char title[10];
    char artist[20];
    int durationInSeconds;

};

int main(){

struct Playlist p1;

strcpy(p1.title,"Awarapan");
strcpy(p1.artist,"Arijit singh");
p1.durationInSeconds = 240;

printf("Title of song: %s\n",p1.title);
printf("Artist of song: %s\n",p1.artist);
printf("Duration of song: %d seconds\n",p1.durationInSeconds);

return 0;
}

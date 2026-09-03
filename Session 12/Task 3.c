//3.Define a nested structure called MovieShow for a BookMyShow-style app: Movie (string), Screen (integer), and a nested structure Time with hours and minutes (integers). Create and initialize a MovieShow variable for any movie and print its details in the format 'Movie: X, Screen: Y, Time: HH:MM'.

#include<stdio.h>

struct Time {
    int hours;
    int minutes;
};

struct MovieShow{
    char Movie[20];
    int Screen;
    struct Time showTime;
};

int main(){

struct MovieShow show = {
    "Avengers Endgame",
    3,
    {3,01}
};

printf("Movie: %s, Screen:%d, Time: %02d:%02d\n",show.Movie,show.Screen,show.showTime.hours,show.showTime.minutes);

return 0;
}



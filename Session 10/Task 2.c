//2.Take input for two usernames (as strings) and compare them using strcmp(). Display whether they are the same or different.

#include<stdio.h>
#include<string.h>

int main(){

char song1[] = "Tum Hi Ho";
char song2[] = "Tum Hi hao";

if(!strcasecmp(song1,song2)){
    printf("Song1 and Song2 variable are same");
}
else{
    printf("Song1 and Song2 variable are not same");
}



return 0;
}

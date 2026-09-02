//2.Write a function swapPlaylistCounts(int *a, int *b) that swaps the number of songs in two Spotify playlists using pointers, then call the function in main and print the swapped values.

#include<stdio.h>

void swapPlaylistCounts(int *a, int *b){

int temp;

temp = *a;
*a = *b;
*b = temp;

}

int main(){

    int playlist1 = 25;
    int playlist2 = 40;

    printf("Before Swapping:\n");
    printf("Playlist 1 Songs = %d\n", playlist1);
    printf("Playlist 2 Songs = %d\n", playlist2);

    swapPlaylistCounts(&playlist1,&playlist2);

    printf("After Swapping:\n");
    printf("Playlist 1 Songs = %d\n", playlist1);
    printf("Playlist 2 Songs = %d\n", playlist2);

return 0;
}

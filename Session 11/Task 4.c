//4.Create a function incrementFollowers(int *followers, int n) that increases each follower count in an array (representing Instagram followers for 5 friends) by 100 using pointer arithmetic, then print the updated counts.

#include<stdio.h>

void incrementFollowers(int *followers, int n){
    for(int i=0;i<n;i++){
        *followers += 100;
        followers++;
    }

}

int main()
{
    int followers[5] = {1200,850,2300,1750,950};
    incrementFollowers(followers,5);

     printf("Updated Follower Counts:\n");
     for (int i = 0; i < 5; i++) {
        printf("Friend %d: %d followers\n", i + 1, followers[i]);
    }

    return 0;
}

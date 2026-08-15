//5.Write a code snippet that demonstrates the difference between pre-increment (++count) and post-increment (count++) by logging the values before and after using both on a followerCount variable.


#include <stdio.h>

int main() {
    int followerCount = 100;

    printf("Initial follower count = %d\n\n", followerCount);

    printf("Using Pre-increment (++followerCount)\n");
    printf("Value returned: %d\n", ++followerCount);
    printf("Follower count after pre-increment: %d\n\n", followerCount);

    //value reset
    followerCount = 100;

    printf("Using Post-increment (followerCount++)\n");
    printf("Value returned: %d\n", followerCount++);
    printf("Follower count after post-increment: %d\n", followerCount);

    return 0;
}

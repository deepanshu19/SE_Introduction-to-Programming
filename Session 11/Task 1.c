//1.Declare an integer variable called likes and a pointer variable called ptrLikes; assign likes a value, point ptrLikes to likes, and print both the value and the address stored in ptrLikes.

#include<stdio.h>

int main()
{
    int likes, *ptrLikes;
    likes = 90;
    ptrLikes = &likes;

    printf("Value of likes %d\n",likes);
    printf("Value of *ptrLikes %d\n",*ptrLikes);

    printf("Address of likes %x\n",&likes);
    printf("Address of *ptrLikes %x\n",ptrLikes);

    return 0;
}

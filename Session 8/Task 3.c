//3.Write two functions: increaseFollowersByValue and increaseFollowersByReference. Each should take a followers count and add 1000 to it, but one should use pass-by-value and the other pass-by-reference. Show how the original followers count changes (or doesn't) after calling each function.

#include<stdio.h>

void increaseFollowersByValue(int followers){
followers = followers+1000;
printf("Inside increaseFollowersByValue(): %d\n", followers);
}

void increaseFollowersByReference(int *followers){
*followers = *followers +1000;
printf("Inside increaseFollowersByReference(): %d\n", *followers);
}

int main(){

int followers = 5000;

printf("Original followers: %d\n\n",followers);

increaseFollowersByValue(followers);
printf("After increaseFollowersByValue(): %d\n\n", followers);

increaseFollowersByReference(&followers);
printf("After increaseFollowersByReference(): %d\n", followers);


return 0;
}

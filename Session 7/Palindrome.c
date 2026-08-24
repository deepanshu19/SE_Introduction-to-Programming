#include<stdio.h>

int main(){

int num, originalNum, remainder, result = 0;

printf("Enter a number: ");
scanf("%d",&num);

originalNum = num;

while(originalNum != 0){
    remainder = originalNum%10;
    result = result*10 + remainder;
    originalNum /= 10;
}

if(result == num){
    printf("%d is a Palindrome number.\n", num);
}
else{
    printf("%d is not a Palindrome number.\n", num);
}

return 0;
}

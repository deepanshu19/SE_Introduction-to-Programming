//1.Declare a 1D array called dailySteps with 7 elements to store your step count for each day of the week, assign sample values, and print each value using a loop.

#include<stdio.h>

int main(){

int dailySteps[7];

for(int i=0;i<7;i++){
    printf("Enter steps done for day %d:",i+1);
    scanf("%d",&dailySteps[i]);
}

for(int i=0;i<7;i++){
    printf("Steps done for day %d is %d\n",i+1,dailySteps[i]);
}

return 0;
}

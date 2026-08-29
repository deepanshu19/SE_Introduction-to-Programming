//3.Build a function that takes a 1D array of 7 integers representing your daily Zomato order amounts and calculates the average spend for the week.<br><br><em><strong>Hint:</strong> Use a loop to sum the values, then divide by the array length.</em>

#include<stdio.h>

float calculateAvg(float orderAmnt[],int days){
float sum=0;

for(int i=0;i<days;i++){
    sum += orderAmnt[i];
}

return (float)sum/days;

}


int main(){

float zomatoOrderAmnts[7];

for(int i=0;i<7;i++){
    printf("Enter Zomato Order Amount for day %d:",i+1);
    scanf("%f",&zomatoOrderAmnts[i]);
}

float avgAmnt = calculateAvg(zomatoOrderAmnts,7);

printf("Average weekly spend: %.2f\n", avgAmnt);

return 0;
}

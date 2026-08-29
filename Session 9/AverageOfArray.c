//average of  array

#include<stdio.h>

int additionArray(int array[]){
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=array[i];
    }

    return sum;
}

int findGreatest(int array[],int avg){
    int greatest=avg;
    for(int i=0;i<5;i++){
        if(greatest<array[i]){
            greatest = array[i];
        }
    }

    return greatest;
}

int main(){
int arr[5];

for(int i=0;i<5;i++){
    printf("Enter number %d value:",i+1);
    scanf("%d",&arr[i]);
}

printf("Average of array is: %d\n",additionArray(arr)/5);
printf("Greatest no than avg is: %d",findGreatest(arr,additionArray(arr)/5));

return 0;
}

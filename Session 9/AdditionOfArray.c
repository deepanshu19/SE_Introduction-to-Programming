//addition of even array

#include<stdio.h>

int additionArray(int array[]){
    int sum=0;
    for(int i=0;i<5;i++){
        if(array[i]%2==0){
            printf("%d is even number.\n",array[i]);
            sum+=array[i];
        }
    }

    return sum;
}

int main(){
int arr[5];

for(int i=0;i<5;i++){
    printf("Enter number %d value:",i+1);
    scanf("%d",&arr[i]);
}

printf("Addition of even no. array is: %d",additionArray(arr));

return 0;
}

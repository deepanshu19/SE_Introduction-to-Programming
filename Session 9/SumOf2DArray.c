#include<stdio.h>

void printArray(int arr[3][3])
{
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);

    }
    printf("\n");
}
}

int sumArray(int arr[3][3])
{
    int sum=0;
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       sum += arr[i][j];

    }
}
return sum;
}

int main(){
int array[3][3];

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("Enter value for row %d and column %d:",i,j);
        scanf("%d",&array[i][j]);
    }
}

printf("\n");
printArray(array);

printf("\n");
printf("Sum of array is:%d\n",sumArray(array));

return 0;
}

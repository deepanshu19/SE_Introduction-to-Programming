#include<stdio.h>

int chkOddEven(int no){
    return(no%2==0);
}

int main(){
int no;

printf("Enter a no:");
scanf("%d",&no);

chkOddEven(no) ? printf("%d is even.",no) : printf("%d is odd.",no);

/*
if(chkOddEven(no)){
    printf("%d is even.",no);
}else{
printf("%d is odd.",no);
}
*/

return 0;

}

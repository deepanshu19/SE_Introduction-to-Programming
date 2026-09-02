//1.Declare a function called getUserInitials that takes a user's full name (like 'Virat Kohli') and returns their initials in uppercase (e.g., 'VK'). Call this function with your favorite cricketer's name and print the result.
#include<stdio.h>

void getUserInitials(char name[]){
    printf("%c",name[0]);

    for(int i=0;name[i]!='\0';i++){
        if(name[i] == ' '){
            printf("%c",name[i+1]);
            break;
        }
    }
}

int main(){

char name[] = "Virat Kohli";

printf("Initials: ");
getUserInitials(name);

return 0;
}

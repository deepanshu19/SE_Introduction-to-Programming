//4.Build a small script that takes the user's full name as input and creates a username by copying only the first 5 characters using strcpy(). Print the generated username.<br><br><em><strong>Constraint:</strong> If the name is shorter than 5 characters, use the full name as the username.</em>

#include<stdio.h>
#include<string.h>

int main(){

char fullName[100];
char userName[100];

printf("Enter your full name:");
fgets(fullName,sizeof(fullName),stdin);

// Remove newline character if present
int i =0;

while(fullName[i] != '\0'){
    if(fullName[i] == '\n'){
        fullName[i] = '\0';
    }
    i++;
}

strcpy(userName,fullName);

// If name is longer than 5 characters, keep only first 5

if(strlen(userName) > 5){
    userName[5]='\0';
}

printf("Generated Username: %s\n",userName);

return 0;
}

//4.Build a structure called InstaProfile with fields: username (string), followers (integer), and a nested structure Bio with fields: description (string) and age (integer). Initialize an InstaProfile variable with your own details and display all fields.

#include<stdio.h>

struct Bio {
    char description[100];
    int age;
};

struct InstaProfile{
    char username[20];
    int followers;
    struct Bio bio;
};

int main()
{
    struct InstaProfile insta;

    //gather instagram information
    printf("Enter a username of insta profile:");
    scanf("%s",&insta.username);

    printf("Enter followers count of insta profile:");
    scanf("%d",&insta.followers);

    printf("Enter a description of insta profile:");
    getchar();
    fgets(insta.bio.description, sizeof(insta.bio.description), stdin);

    printf("Enter age of insta profile:");
    scanf("%d",&insta.bio.age);

    //print instagram information
     printf("\n");
     printf("Username of insta profile:%s\n",insta.username);
     printf("Followers count of insta profile:%d\n",insta.followers);
     printf("Description of insta profile:%s",insta.bio.description);
     printf("Age of insta profile:%d\n",insta.bio.age);

    return 0;
}

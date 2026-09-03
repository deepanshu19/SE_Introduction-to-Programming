#include <stdio.h>

struct Student{
    int id;
    char name[50];
    float marks;
};

int main(){
struct Student students[100];
int count =0;
int choice;

do{
    printf("\n===== Student Management System =====\n");
    printf("1. Add Student\n");
    printf("2. Show All Students\n");
    printf("3. Continue\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("\nEnter Student ID: ");
        scanf("%d",&students[count].id);

        printf("Enter Student Name: ");
        scanf(" %[^\n]",students[count].name);

        printf("Enter Student Marks: ");
        scanf("%f",&students[count].marks);

        count++;
        printf("Student added successfully!\n");
        break;

    case 2:
        if(count == 0)
                {
                    printf("\nNo students found.\n");
                }
                else
                {
                    printf("\n----- Student List -----\n");

                    for(int i = 0; i < count; i++)
                    {
                        printf("ID: %d\n", students[i].id);
                        printf("Name: %s\n", students[i].name);
                        printf("Marks: %.2f\n", students[i].marks);
                        printf("------------------------\n");
                    }
                }
        break;

    case 3:
        printf("Continuing...\n");
        break;

    case 4:
        printf("Exiting program...\n");
        break;

    default:
        printf("Invalid choice!\n");
    }


}while(choice != 4);

return 0;
}

//4.Explain with your own example the difference between entry-controlled and exit-controlled loops by writing a short code snippet for each (for/while vs do-while) and describing what happens if the loop condition is false at the start.

/*
Entry-Controlled Loop:
Condition is checked before entering the loop body.
The loop may execute 0 times if the condition is false initially.
Examples: for, while
*/

/*
Condition is checked after executing the loop body.
The loop executes at least 1 time even if the condition is false initially.
Example: do-while
*/

#include<stdio.h>

int main(){

//Entry-Controlled Loop (while)
int num = 10;

    while (num < 5) {
        printf("Number = %d\n", num);
        num++;
    }

    printf("Loop ended.\n");

//Exit-Controlled Loop (do-while)
do {
        printf("Number = %d\n", num);
        num++;
    } while (num < 5);

    printf("Loop ended.\n");
return 0;
}

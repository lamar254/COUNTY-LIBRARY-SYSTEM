/*
County library management system by KEVIN MUCHEMI
FEB 2022
MIT LICENSE
C89 COMPILER
*/
#include <stdio.h>
#include <stdlib.h>

int menu()
{   int action;
    printf("select an action!\n");
    printf("1. Add new patron!\n");
    printf("2. View patrons!\n");
    printf("3. View books!\n");
    printf("4. Add New book!\n");
    printf("Your Action!\n");
    scanf("%d",&action);
    if(action< 1 || action > 4) {
        printf("invalid Action. Try again!!");
    }
    return action;
}

void execute_action(int action){
    switch(action){
        case 1:
            printf("adding a new patron\n");
            break;
        case 2 :
            printf("list of all patrons\n");
            break;
        case 3 :
            printf("list of all books\n");
            break;
        case 4 :
            printf("adding a new book\n");
            break;
        default: printf("invalid action.\n");

    }

}

int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("WELCOME KEVIN!\n");
    execute_action(menu());
    return 0;
}

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
    return action;
}

int main()
{
    printf("COUNTY LIBRARY SYSTEM!\n");
    printf("WELCOME KEVIN!\n");
    printf("You selected an action %d",menu());
    menu();
    return 0;
}

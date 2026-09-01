#include <stdio.h>
#include <string.h>

int main(){
int population;
char municipality_name[50];
char mayor_name[50];

    printf("Welcome to Windhoek Municipality\n");
    printf("Enter Municipality Name:\n");
    scanf("%49[^\n]",municipality_name);
    printf("Enter Mayor's Name:\n");
    scanf(" %49[^\n]",mayor_name);
    printf("Enter Population:\n");
    scanf("%d",&population);

    printf("\n-------------------\n");
    printf("Municipality name: %s\n",municipality_name);
    printf("Mayor's name: %s\n",mayor_name);
    printf("Population: %d\n",population);

    return 0;
}

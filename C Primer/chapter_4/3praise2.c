#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary human being"

int main(void)
{
    char name[40];
    printf("What is your name? ");
    scanf("%s", name);
    printf("\n Hello, %s, %s \n", name, PRAISE);
    printf("Your name of %zd letters, occupy %zd memory cells. \n", strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters \n", strlen(PRAISE));
    printf("And occupies %zd memory cells. \n", sizeof PRAISE);

    return 0;
}
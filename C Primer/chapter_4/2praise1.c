#include <stdio.h>

#define PRAISE "You are an extraordinary beign"

int main(void)
{
    char name[40];

    printf("What is your name? \n");
    scanf("%s", name);

    printf("Hello %s, %s \n", name, PRAISE);

    return 0;
}
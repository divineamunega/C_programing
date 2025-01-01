#include <stdio.h>

int main(void)
{

    printf("I will be printed \n"); // This will get printed
    printf("Processing...");        // THis doesnt get printed out until the progam is done executing.

    for (int i = 0; i < 1000000000000; i++)
    {
        // Simulation of Long running task
    }
    return 0;
}
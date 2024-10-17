#include <stdio.h>
int main(void)
{
    char ch;

    printf("Please enter a character. \n");
    scanf("%c", &ch);
    printf("The charcter code for %c is %d. \n", ch, ch);

    return 0;
}

// Printf specifies how data is displayed not how it is stored
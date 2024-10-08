#include <stdio.h>

// int main(void)
// {
//     int num;
//     num = 1;
//     printf("I am a simple ");
//     printf("computer \n");
//     printf("My favourite number is %d because it is first.\n", num);

//     return 0;
// }

// Taking another step in C
// int main(void)
// {
//     int feet, fathoms;
//     fathoms = 2;
//     feet = 6 * fathoms;
//     printf("There are  %d feet in %d fathoms! \n", feet, fathoms);
//     printf("Yes, I said %d feet! \n", feet);
//     return 0;
// }

// Summoning other functions

// void butler(void);
// int main(void)
// {
//     printf("I will summon the butler function. \n");
//     butler();
//     printf("Yes.. Bring me some tea and writable DVDs. \n");

//     return 0;
// }

// void butler(void)
// {
//     printf("You rang sir? \n");
// }

// Prrgramming Excersices

// int main(void)
// {
//     printf("Divine Amunega \n");
//     printf("Divine \nAmunega\n");
//     printf("Divine ");
//     printf("Amunega\n");
// }

// int main(void)
// {
//     int years, days;
//     years = 17;
//     days = 17 * 365;

//     printf("I am %d years old and i've lived %d days on earth.\n", years, days);
// }

// void jolly(void);
// void deny(void);
// int main()
// {
//     jolly();
//     jolly();
//     jolly();
//     deny();
// }

// void jolly(void)
// {
//     printf("For he's a jolly good fellow!\n");
// }

// void deny(void)
// {
//     printf("Which nobody can deny!\n");
// }

void one_three(void);
void two(void);
int main(void)
{
    printf("starting now \n");
    one_three();
    printf("done! \n");
}

void one_three(void)
{
    printf("one \n");
    two();
    printf("three \n");
}

void two(void)
{
    printf("two \n");
}
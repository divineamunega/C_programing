#include <stdio.h>

// Fisrt C code

/*

int main() {
    printf("Hello World \n");
    printf("Answer %d \n", 42);
    printf("Name %s \n", "Sarah");
    printf("X %.1f i %d\n", 3.5,100);

    return 0;
}

*/

// Int input

/*
int main() {
    int usf;
    int euf;

    printf("Enter US floor \n");
    scanf("%d", &usf);
    euf = usf - 1;

    printf("EU Floor %d \n", euf);
    return 0;

}

*/

// String Input

/*
int main () {
    char name[10];
    printf("Enter Your Name \n");

    scanf("%s", name);

    printf("Hello %s \n", name);

    return 0;
}
*/

// Line Input
/*

int main () {
    char line[1000];
    printf("Enter a line \n");
    scanf("%[^\n]1000s", line);
    printf("Line: %s", line);

    return 0;
}
*/

// Line Input (SAFE)

/*

int main() {
    char line[1000];
    printf("Enter a line \n \n ");
    fgets(line, 1000, stdin);
    printf("LINE: %s \n", line);


    return 0;
}
*/

// Read a file

/*
int main () {

    char line[1000];
    FILE *hand;
    hand = fopen("romeo.txt", "r");

    while (fgets(line, 1000, hand) != NULL){
        printf("%s", line);
    }
    return 0;
}
*/

// Counted Loop from 1 - 4
// int main () {
//     int i = 0;

//     for(i; i<5; i++) {
//         printf("%d \n", i);
//     }
//     return 0;
// }

// I don't understand this
/*

int main() {
    int first =1;
    int val, maxVal, minVal;

    while(scanf("%d", &val) != EOF) {
        if(first || val > maxVal) maxVal = val;
        if(first || val < minVal) minVal = val;
        first = 0;
    }

    printf("Maximum %d \n", maxVal);
    printf("Minimum %d \n", minVal);

    return 0;
}

*/

// Callijng Functions

/*

int mymult (int a, int b) {
    return a * b;
}

int main() {

    int c = mymult(5,6);
    printf("\n %d \n Is your answer",c);

    return 0;
}
 */

// Languages like JavaScript PHP Python treat single and double quotes nearly the same. Bothe create String Constants

/*
In C Single Quotyes are a character and double quotes a charatcer array
(neither are a string)

In C a character is a byte - a short (typically 8-bit) intwerger
*/

/*

int main()
{
    char x[3] = "Hi";
    char y[3] = {
        'H',
        'i',
        'e',
    };

printf("x %s\n", x);
printf("y %s\n", y);
printf("%s\n", "Hi");
printf("%c%c\n", 'H', 'i');

return 0;
}
*/

///////////////////////////////
/////////////////////////////
// Charcter Sets
/*
The C char type is just a number - character representationdepend on charcter set


Modern charcters including 😊 are represented in multi-byte
sequences using Unicode and UTF-8 but in 1979 we used ASCII
 and other chracter sets
*/

/*
C can't represent emoji's by iteslef
*/

// Characters in C are closer to intergers than strings

/*
int main()
{
    printf("%c\n", 65);  // Will print out A
    printf("%d\n", 'A'); // Will print out 65
    char num = 'A';
    printf("%d\n", num + num); // Will print 130 🤯

    char num1 = '<';
    printf("%c\n", num1 + num1); // Should give us x 🤯
    // The charcter , ascii code is 60.. 60 + 60 120 = the code of x

    return 0;
}
*/

////////////////////////////////
//

// Terminatating a string

/*
Strings in C are not strings they are chracter arrays
The size of a 'string' stored in a C array
is not the length of the array

C uses a special charactwer '\0' that marks the string end by convention

Character Arrays need to allocate an extra byte to
store the line-end character
*/
/*
int main()
{
    char x[6];
    x[0] = 'H';
    x[1] = 'e';
    x[2] = 'l';
    x[3] = 'l';
    x[4] = 'o';
    x[5] = 'f';
    x[6] = 'f';

    printf("%s\n", x);

    x[2] = 'L';
    printf("%s\n", x);

    x[3] = '\0';
    printf("%s", x);

    return 0;
}
*/

//////////////////////////////////
//

// String Length
/*
int main()
{
    char x[] = "Hello";
    int py_length();

    printf("%s %d", x, py_length(x));
}

int py_length(self)
char self[];
{
    int i;
    for (i = 0; self[i]; i = i + 1)
    {
        // IDK if it's wrong but i think the increment is the last thing that happens in a for loop
        printf("%d \n", i);
    };
    return i;
}
*/

int main()
{
    char string[] = "I'm so stressed";
    printf("%s \n", string);
    int i;
    for (i = 0; string[i]; i++)
    {
    }
    char holder[i];

    for (int j = 0; j <= i; j++)
    {

        holder[j] = string[i - j - 1];
        if (j == 5)
            continue;
    }

    printf("%s \n", holder);

    return 0;
}

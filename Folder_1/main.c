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



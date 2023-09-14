#include "main.h"

void printLowercaseAlphabet() {
    char letter = 'a';

    while (letter <= 'z') {
       _putchar(letter);
        letter++;
    }

   _putchar('\n'); // Print a newline character after the alphabet
}

int main() {
    printLowercaseAlphabet(); // Call the function to print the alphabet
    return 0;
}

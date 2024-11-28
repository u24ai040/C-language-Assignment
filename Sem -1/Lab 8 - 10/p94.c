/*WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
POINTERS*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100], revs[100];
    char *ptr1, *ptr2;

    printf("Enter a string: ");
    scanf("%s", s);

    // Initialize pointers
    ptr1 = s;
    ptr2 = revs;

    // Move ptr1 to the end of the string
    while (*ptr1 != '\0') {
        ptr1++;// this is adress of null character
    }



    // Decrement ptr1 to point to the last character
    ptr1--;

    // Copy the string in reverse order
    while (ptr1 >= s) {
        *ptr2 = *ptr1;
        ptr1--;
        ptr2++;
    }
    // Null-terminate the reversed string
   *ptr2 = '\0';

    printf("Reverese string : %s",revs);
}
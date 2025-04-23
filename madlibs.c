#include <stdio.h>

int main () {
    char adjective[30] ;
    char noun[30] ;
    char verb[30] ;

    printf ("Enter an adjective: ");
    scanf ("%s", adjective);

    printf ("Enter a noun: ");
    scanf("%s", noun);

    printf("Enter a verb: ");
    scanf("%s", verb);



    printf("\n---\n\nThe %s, %s, %s to the store.\n", adjective, noun, verb);

    return 0;
}


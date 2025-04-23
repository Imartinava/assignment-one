#include <stdio.h>

int main () {
    char adjective[30] ;
    char noun[30] ;
    char verb[30] ;
    char adverb[30] ;
    char place[30] ;
    char object[30] ;

    printf ("Enter an adjective: ");
    scanf ("%s", adjective);

    printf("\nYou %s fool.\n", adjective);

    return 0;
}


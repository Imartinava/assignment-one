#include <stdio.h>

int main () {
    char adjective[300] ;
    char noun[300] ;
    char verb[300] ;

    printf ("Enter an adjective: ");
    scanf ("%[^\n]%*c", adjective);

    printf ("Enter a noun: ");
    scanf("%[^\n]%*c", noun);

    printf("Enter a verb: ");
    scanf("%[^\n]%*c", verb);



    printf("\n---\n\nThe %s, %s, %s to the store.\n", adjective, noun, verb);

    return 0;
}


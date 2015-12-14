#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define MAX_MATCHES 255

struct Match {
    char * name;
    int startingDay;
    int endingDay;
    int startingTime;
    int endingTime;
}

typedef struct Match match;

/* Read input from file and returns content in array of structs */
match * fileRead( char * fileName ) {
    FILE * fileInput = fopen(fileName, "r");

    if( fileInput == NULL ) {
        printf("Error in opening file\n");
        return(NULL);
    }

    /* INIT */
    int pos = 0;
    match * matches = malloc(MAX_MATCHES * sizeof(match));

    while( TRUE ) {
        char c = fgetc( fileInput );

        if(feof(fileInput))
            break;

    }

    return matches;
}

/* Main function */
void main(int argc, char * argv[]) {
    
    if( argc < 2 ) {
        printf("Please specify file input.\n");
        return;
    }

    char * fileName = argv[1];

    fileRead( fileName );

}
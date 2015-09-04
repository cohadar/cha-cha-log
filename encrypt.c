#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main( int argc, char **argv ) {
	if ( argc != 3 ) {
        printf( "usage: encrypt <InputFile> <OutputFile>\n"
        	    "  you will ne prompted for encryption password\n" );
        return 1;
    }

    FILE*  inFile = fopen( argv[ 1 ], "rb" );
    FILE* outFile = fopen( argv[ 2 ], "wb" );

	char *password = getpass("Password: ");

    fclose(inFile);
    fclose(outFile);

	return 0;
}